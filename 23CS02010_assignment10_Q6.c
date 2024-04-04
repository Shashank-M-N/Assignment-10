#include <stdio.h>

typedef struct control_message
{
    int opcode;
    int statuscode;
} control;

typedef union Packet
{
    control controlmsg;
    char payload[100];
} packet;

struct DataPacket
{
    int flag;
    packet packet1;
} datapacket[10];

int main()
{
    for (int i = 0; i < 10; i++)
    {
    label:
        printf("Enter choice :\n");
        printf("1.Control Message\n2.Payload\n");
        scanf("%d", &datapacket[i].flag);
        switch (datapacket[i].flag)
        {
        case 1:
            printf("Enter the opcode :");
            scanf("%d", &datapacket[i].packet1.controlmsg.opcode);
            printf("Enter the statuscode :");
            scanf("%d", &datapacket[i].packet1.controlmsg.statuscode);

            printf("opcode : %d\n", datapacket[i].packet1.controlmsg.opcode);
            printf("Status code : %d\n", datapacket[i].packet1.controlmsg.statuscode);
            break;
        case 2:
            printf("Enter the payload :");
            gets(datapacket[i].packet1.payload);
            printf("Payload : ");
            puts(datapacket[i].packet1.payload);
            break;

        default:
            printf("Invalid choice.\n");
            goto label;
        }
    }

    return 0;
}