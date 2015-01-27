////////////////////////////////////////////////
// Authors: Tahoma
////////////////////////////////////////////////

#ifndef _SM_UNK_1606_H_
#define _SM_UNK_1606_H_

inline void SM_UNK_1606(PACKET* pck, int unk)
{
	pck->CreateBufForSend();
	switch (unk)
	{
	case 0:
		pck->writeA("0302020000000000683F9501000000006E011B0001000000000000002A000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000095CA9A01000000006E011B0001000000000000002A0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000003A2A070000000000");
		break;
	case 1:
		pck->writeA("0302020000000000683F9501000000006E011B0001000000000000002A000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000095CA9A01000000006E011B0001000000000000002A0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000003A2A070000000000");
		break;
	case 2:
		pck->writeA("0302020000000000683F9501000000006E011B0001000000000000002A000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000095CA9A01000000006E011B0001000000000000002A0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000003A2A070000000000");
		break;
	}
	pck->PackSend(OPCODE_SM_UNK_1606);
}

/*
06 16 00 00 03 02 02 00 00 00 00 00 68 3F 95 01   ............h?..
00 00 00 00 6E 01 1B 00 01 00 00 00 00 00 00 00   ....n...........
2A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00   *...............
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00   ................
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00   ................
00 00 00 00 00 00 00 00 00 00 00 00 95 CA 9A 01   ................
00 00 00 00 6E 01 1B 00 01 00 00 00 00 00 00 00   ....n...........
2A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00   *...............
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00   ................
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00   ................
00 00 00 00 3A 2A 07 00 00 00 00 00               ....:*......
*/

#endif

