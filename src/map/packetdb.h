//  Client<->Map Packet Database
// 
//  Structure of Database:
//  PacketType,PacketLength[,Name,FieldIndex1:FieldIndex2:FieldIndex3:...]
// 
//  01. PacketType       ID of the packet.
//  02. PacketLength     Length of the packet. If 0, packet is disabled in current packet version. If -1, packet has variable size.
//  03. Name             Name of the packet parser function (optional, for incoming packets only).
//  04. FieldIndex       Specifies the offset of a packet field in bytes from the begin of the packet (only specified when Name is given).
//                       Can be 0, when the layout is not known.
//  ...
// 
//  NOTE: Up to MAX_PACKET_POS (typically 20) field indexes may be used.
// 
//  The packet database allows you to add support for new clients,
//  because packets change every release.
// 
//  Note: Every packet version needs a wanttoconnection specification, since
//  that is the packet used to identify a client's version.
//  If multiple versions have the same connection packet, the higher version
//  will be used (unless the lower one is specified as the default)
// 
//  Incoming packets have their parser function and layout specified, which enables
//  them for the current and all higher versions, unless explicitely disabled.
// 
//  Outgoing packets must be specified in order to enable them for the current
//  and all higher versions, unless explicitely disabled. Packets that are not
//  enabled for a packet version are silently discarded when sent as multicast.
// 
//  Every packet version inherits packet definitions from the previous (lower)
//  packet version.
// 
//  Main packet version of the DB to use (default = max available version)
//  Client detection is faster when all clients use this version.
//  Version 23 is the latest Sakexe (above versions are for Renewal clients)
// packet_db_ver: 25
// packet_db_ver: default
// packet_db_ver: 23
// packet_ver: 5
addpacket(0x64, 55, NULL); 
addpacket(0x65, 17, NULL); 
addpacket(0x66, 6, NULL); 
addpacket(0x67, 37, NULL); 
addpacket(0x68, 46, NULL); 
addpacket(0x69, -1, NULL); 
addpacket(0x6a, 23, NULL); 
addpacket(0x6b, -1, NULL); 
addpacket(0x6c, 3, NULL); 
addpacket(0x6d, 108, NULL); 
addpacket(0x6e, 3, NULL); 
addpacket(0x6f, 2, NULL); 
addpacket(0x70, 6, NULL); 
addpacket(0x71, 28, NULL); 
addpacket(0x72, 19, "wanttoconnection", 2, 6, 10, 14, 18); 
addpacket(0x73, 11, NULL); 
addpacket(0x74, 3, NULL); 
addpacket(0x75, -1, NULL); 
addpacket(0x76, 9, NULL); 
addpacket(0x77, 5, NULL); 
addpacket(0x78, 54, NULL); 
addpacket(0x79, 53, NULL); 
addpacket(0x7a, 58, NULL); 
addpacket(0x7b, 60, NULL); 
addpacket(0x7c, 41, NULL); 
addpacket(0x7d, 2, "loadendack", 0); 
addpacket(0x7e, 6, "ticksend", 2); 
addpacket(0x7f, 6, NULL); 
addpacket(0x80, 7, NULL); 
addpacket(0x81, 3, NULL); 
addpacket(0x82, 2, NULL); 
addpacket(0x83, 2, NULL); 
addpacket(0x84, 2, NULL); 
addpacket(0x85, 5, "walktoxy", 2); 
addpacket(0x86, 16, NULL); 
addpacket(0x87, 12, NULL); 
addpacket(0x88, 10, NULL); 
addpacket(0x89, 7, "actionrequest", 2, 6); 
addpacket(0x8a, 29, NULL); 
addpacket(0x8b, 2, NULL); 
addpacket(0x8c, -1, "globalmessage", 2, 4); 
addpacket(0x8d, -1, NULL); 
addpacket(0x8e, -1, NULL); 
// addpacket(0x8f, -1, NULL); 
addpacket(0x90, 7, "npcclicked", 2); 
addpacket(0x91, 22, NULL); 
addpacket(0x92, 28, NULL); 
addpacket(0x93, 2, NULL); 
addpacket(0x94, 6, "getcharnamerequest", 2); 
addpacket(0x95, 30, NULL); 
addpacket(0x96, -1, "wis", 2, 4, 28); 
addpacket(0x97, -1, NULL); 
addpacket(0x98, 3, NULL); 
addpacket(0x99, -1, "broadcast", 2, 4); 
addpacket(0x9a, -1, NULL); 
addpacket(0x9b, 5, "changedir", 2, 4); 
addpacket(0x9c, 9, NULL); 
addpacket(0x9d, 17, NULL); 
addpacket(0x9e, 17, NULL); 
addpacket(0x9f, 6, "takeitem", 2); 
addpacket(0xa0, 23, NULL); 
addpacket(0xa1, 6, NULL); 
addpacket(0xa2, 6, "dropitem", 2, 4); 
addpacket(0xa3, -1, NULL); 
addpacket(0xa4, -1, NULL); 
addpacket(0xa5, -1, NULL); 
addpacket(0xa6, -1, NULL); 
addpacket(0xa7, 8, "useitem", 2, 4); 
addpacket(0xa8, 7, NULL); 
addpacket(0xa9, 6, "equipitem", 2, 4); 
addpacket(0xaa, 7, NULL); 
addpacket(0xab, 4, "unequipitem", 2); 
addpacket(0xac, 7, NULL); 
// addpacket(0xad, -1, NULL); 
addpacket(0xae, -1, NULL); 
addpacket(0xaf, 6, NULL); 
addpacket(0xb0, 8, NULL); 
addpacket(0xb1, 8, NULL); 
addpacket(0xb2, 3, "restart", 2); 
addpacket(0xb3, 3, NULL); 
addpacket(0xb4, -1, NULL); 
addpacket(0xb5, 6, NULL); 
addpacket(0xb6, 6, NULL); 
addpacket(0xb7, -1, NULL); 
addpacket(0xb8, 7, "npcselectmenu", 2, 6); 
addpacket(0xb9, 6, "npcnextclicked", 2); 
addpacket(0xba, 2, NULL); 
addpacket(0xbb, 5, "statusup", 2, 4); 
addpacket(0xbc, 6, NULL); 
addpacket(0xbd, 44, NULL); 
addpacket(0xbe, 5, NULL); 
addpacket(0xbf, 3, "emotion", 2); 
addpacket(0xc0, 7, NULL); 
addpacket(0xc1, 2, "howmanyconnections", 0); 
addpacket(0xc2, 6, NULL); 
addpacket(0xc3, 8, NULL); 
addpacket(0xc4, 6, NULL); 
addpacket(0xc5, 7, "npcbuysellselected", 2, 6); 
addpacket(0xc6, -1, NULL); 
addpacket(0xc7, -1, NULL); 
addpacket(0xc8, -1, "npcbuylistsend", 2, 4); 
addpacket(0xc9, -1, "npcselllistsend", 2, 4); 
addpacket(0xca, 3, NULL); 
addpacket(0xcb, 3, NULL); 
addpacket(0xcc, 6, "gmkick", 2); 
addpacket(0xcd, 3, NULL); 
addpacket(0xce, 2, "killall", 0); 
addpacket(0xcf, 27, "wisexin", 2, 26); 
addpacket(0xd0, 3, "wisall", 2); 
addpacket(0xd1, 4, NULL); 
addpacket(0xd2, 4, NULL); 
addpacket(0xd3, 2, "wisexlist", 0); 
addpacket(0xd4, -1, NULL); 
addpacket(0xd5, -1, "createchatroom", 2, 4, 6, 7, 15); 
addpacket(0xd6, 3, NULL); 
addpacket(0xd7, -1, NULL); 
addpacket(0xd8, 6, NULL); 
addpacket(0xd9, 14, "chataddmember", 2, 6); 
addpacket(0xda, 3, NULL); 
addpacket(0xdb, -1, NULL); 
addpacket(0xdc, 28, NULL); 
addpacket(0xdd, 29, NULL); 
addpacket(0xde, -1, "chatroomstatuschange", 2, 4, 6, 7, 15); 
addpacket(0xdf, -1, NULL); 
addpacket(0xe0, 30, "changechatowner", 2, 6); 
addpacket(0xe1, 30, NULL); 
addpacket(0xe2, 26, "kickfromchat", 2); 
addpacket(0xe3, 2, "chatleave", 0); 
addpacket(0xe4, 6, "traderequest", 2); 
addpacket(0xe5, 26, NULL); 
addpacket(0xe6, 3, "tradeack", 2); 
addpacket(0xe7, 3, NULL); 
addpacket(0xe8, 8, "tradeadditem", 2, 4); 
addpacket(0xe9, 19, NULL); 
addpacket(0xea, 5, NULL); 
addpacket(0xeb, 2, "tradeok", 0); 
addpacket(0xec, 3, NULL); 
addpacket(0xed, 2, "tradecancel", 0); 
addpacket(0xee, 2, NULL); 
addpacket(0xef, 2, "tradecommit", 0); 
addpacket(0xf0, 3, NULL); 
addpacket(0xf1, 2, NULL); 
addpacket(0xf2, 6, NULL); 
addpacket(0xf3, 8, "movetokafra", 2, 4); 
addpacket(0xf4, 21, NULL); 
addpacket(0xf5, 8, "movefromkafra", 2, 4); 
addpacket(0xf6, 8, NULL); 
addpacket(0xf7, 2, "closekafra", 0); 
addpacket(0xf8, 2, NULL); 
addpacket(0xf9, 26, "createparty", 2); 
addpacket(0xfa, 3, NULL); 
addpacket(0xfb, -1, NULL); 
addpacket(0xfc, 6, "partyinvite", 2); 
addpacket(0xfd, 27, NULL); 
addpacket(0xfe, 30, NULL); 
addpacket(0xff, 10, "replypartyinvite", 2, 6); 
addpacket(0x100, 2, "leaveparty", 0); 
addpacket(0x101, 6, NULL); 
addpacket(0x102, 6, "partychangeoption", 2); 
addpacket(0x103, 30, "removepartymember", 2, 6); 
addpacket(0x104, 79, NULL); 
addpacket(0x105, 31, NULL); 
addpacket(0x106, 10, NULL); 
addpacket(0x107, 10, NULL); 
addpacket(0x108, -1, "partymessage", 2, 4); 
addpacket(0x109, -1, NULL); 
addpacket(0x10a, 4, NULL); 
addpacket(0x10b, 6, NULL); 
addpacket(0x10c, 6, NULL); 
addpacket(0x10d, 2, NULL); 
addpacket(0x10e, 11, NULL); 
addpacket(0x10f, -1, NULL); 
addpacket(0x110, 10, NULL); 
addpacket(0x111, 39, NULL); 
addpacket(0x112, 4, "skillup", 2); 
addpacket(0x113, 10, "useskilltoid", 2, 4, 6); 
addpacket(0x114, 31, NULL); 
addpacket(0x115, 35, NULL); 
addpacket(0x116, 10, "useskilltopos", 2, 4, 6, 8); 
addpacket(0x117, 18, NULL); 
addpacket(0x118, 2, "stopattack", 0); 
addpacket(0x119, 13, NULL); 
addpacket(0x11a, 15, NULL); 
addpacket(0x11b, 20, "useskillmap", 2, 4); 
addpacket(0x11c, 68, NULL); 
addpacket(0x11d, 2, "requestmemo", 0); 
addpacket(0x11e, 3, NULL); 
addpacket(0x11f, 16, NULL); 
addpacket(0x120, 6, NULL); 
addpacket(0x121, 14, NULL); 
addpacket(0x122, -1, NULL); 
addpacket(0x123, -1, NULL); 
addpacket(0x124, 21, NULL); 
addpacket(0x125, 8, NULL); 
addpacket(0x126, 8, "putitemtocart", 2, 4); 
addpacket(0x127, 8, "getitemfromcart", 2, 4); 
addpacket(0x128, 8, "movefromkafratocart", 2, 4); 
addpacket(0x129, 8, "movetokafrafromcart", 2, 4); 
addpacket(0x12a, 2, "removeoption", 0); 
addpacket(0x12b, 2, NULL); 
addpacket(0x12c, 3, NULL); 
addpacket(0x12d, 4, NULL); 
addpacket(0x12e, 2, "closevending", 0); 
addpacket(0x12f, -1, NULL); 
addpacket(0x130, 6, "vendinglistreq", 2); 
addpacket(0x131, 86, NULL); 
addpacket(0x132, 6, NULL); 
addpacket(0x133, -1, NULL); 
addpacket(0x134, -1, "purchasereq", 2, 4, 8); 
addpacket(0x135, 7, NULL); 
addpacket(0x136, -1, NULL); 
addpacket(0x137, 6, NULL); 
addpacket(0x138, 3, NULL); 
addpacket(0x139, 16, NULL); 
addpacket(0x13a, 4, NULL); 
addpacket(0x13b, 4, NULL); 
addpacket(0x13c, 4, NULL); 
addpacket(0x13d, 6, NULL); 
addpacket(0x13e, 24, NULL); 
addpacket(0x13f, 26, "itemmonster", 2); 
addpacket(0x140, 22, "mapmove", 2, 18, 20); 
addpacket(0x141, 14, NULL); 
addpacket(0x142, 6, NULL); 
addpacket(0x143, 10, "npcamountinput", 2, 6); 
addpacket(0x144, 23, NULL); 
addpacket(0x145, 19, NULL); 
addpacket(0x146, 6, "npccloseclicked", 2); 
addpacket(0x147, 39, NULL); 
addpacket(0x148, 8, NULL); 
addpacket(0x149, 9, "gmreqnochat", 2, 6, 7); 
addpacket(0x14a, 6, NULL); 
addpacket(0x14b, 27, NULL); 
addpacket(0x14c, -1, NULL); 
addpacket(0x14d, 2, "guildcheckmaster", 0); 
addpacket(0x14e, 6, NULL); 
addpacket(0x14f, 6, "guildrequestinfo", 2); 
addpacket(0x150, 110, NULL); 
addpacket(0x151, 6, "guildrequestemblem", 2); 
addpacket(0x152, -1, NULL); 
addpacket(0x153, -1, "guildchangeemblem", 2, 4); 
addpacket(0x154, -1, NULL); 
addpacket(0x155, -1, "guildchangememberposition", 2); 
addpacket(0x156, -1, NULL); 
addpacket(0x157, 6, NULL); 
addpacket(0x158, -1, NULL); 
addpacket(0x159, 54, "guildleave", 2, 6, 10, 14); 
addpacket(0x15a, 66, NULL); 
addpacket(0x15b, 54, "guildexpulsion", 2, 6, 10, 14); 
addpacket(0x15c, 90, NULL); 
addpacket(0x15d, 42, "guildbreak", 2); 
addpacket(0x15e, 6, NULL); 
addpacket(0x15f, 42, NULL); 
addpacket(0x160, -1, NULL); 
addpacket(0x161, -1, "guildchangepositioninfo", 2); 
addpacket(0x162, -1, NULL); 
addpacket(0x163, -1, NULL); 
addpacket(0x164, -1, NULL); 
addpacket(0x165, 30, "createguild", 6); 
addpacket(0x166, -1, NULL); 
addpacket(0x167, 3, NULL); 
addpacket(0x168, 14, "guildinvite", 2); 
addpacket(0x169, 3, NULL); 
addpacket(0x16a, 30, NULL); 
addpacket(0x16b, 10, "guildreplyinvite", 2, 6); 
addpacket(0x16c, 43, NULL); 
addpacket(0x16d, 14, NULL); 
addpacket(0x16e, 186, "guildchangenotice", 2, 6, 66); 
addpacket(0x16f, 182, NULL); 
addpacket(0x170, 14, "guildrequestalliance", 2); 
addpacket(0x171, 30, NULL); 
addpacket(0x172, 10, "guildreplyalliance", 2, 6); 
addpacket(0x173, 3, NULL); 
addpacket(0x174, -1, NULL); 
addpacket(0x175, 6, NULL); 
addpacket(0x176, 106, NULL); 
addpacket(0x177, -1, NULL); 
addpacket(0x178, 4, "itemidentify", 2); 
addpacket(0x179, 5, NULL); 
addpacket(0x17a, 4, "usecard", 2); 
addpacket(0x17b, -1, NULL); 
addpacket(0x17c, 6, "insertcard", 2, 4); 
addpacket(0x17d, 7, NULL); 
addpacket(0x17e, -1, "guildmessage", 2, 4); 
addpacket(0x17f, -1, NULL); 
addpacket(0x180, 6, "guildopposition", 2); 
addpacket(0x181, 3, NULL); 
addpacket(0x182, 106, NULL); 
addpacket(0x183, 10, "guilddelalliance", 2, 6); 
addpacket(0x184, 10, NULL); 
addpacket(0x185, 34, NULL); 
// addpacket(0x186, -1, NULL); 
addpacket(0x187, 6, NULL); 
addpacket(0x188, 8, NULL); 
addpacket(0x189, 4, NULL); 
addpacket(0x18a, 4, "quitgame", 0); 
addpacket(0x18b, 4, NULL); 
addpacket(0x18c, 29, NULL); 
addpacket(0x18d, -1, NULL); 
addpacket(0x18e, 10, "producemix", 2, 4, 6, 8); 
addpacket(0x18f, 6, NULL); 
addpacket(0x190, 90, "useskilltoposinfo", 2, 4, 6, 8, 10); 
addpacket(0x191, 86, NULL); 
addpacket(0x192, 24, NULL); 
addpacket(0x193, 6, "solvecharname", 2); 
addpacket(0x194, 30, NULL); 
addpacket(0x195, 102, NULL); 
addpacket(0x196, 9, NULL); 
addpacket(0x197, 4, "resetchar", 2); 
addpacket(0x198, 8, "changemaptype", 2, 4, 6); 
addpacket(0x199, 4, NULL); 
addpacket(0x19a, 14, NULL); 
addpacket(0x19b, 10, NULL); 
addpacket(0x19c, -1, "localbroadcast", 2, 4); 
addpacket(0x19d, 6, "gmhide", 0); 
addpacket(0x19e, 2, NULL); 
addpacket(0x19f, 6, "catchpet", 2); 
addpacket(0x1a0, 3, NULL); 
addpacket(0x1a1, 3, "petmenu", 2); 
addpacket(0x1a2, 35, NULL); 
addpacket(0x1a3, 5, NULL); 
addpacket(0x1a4, 11, NULL); 
addpacket(0x1a5, 26, "changepetname", 2); 
addpacket(0x1a6, -1, NULL); 
addpacket(0x1a7, 4, "selectegg", 2); 
addpacket(0x1a8, 4, NULL); 
addpacket(0x1a9, 6, "sendemotion", 2); 
addpacket(0x1aa, 10, NULL); 
addpacket(0x1ab, 12, NULL); 
addpacket(0x1ac, 6, NULL); 
addpacket(0x1ad, -1, NULL); 
addpacket(0x1ae, 4, "selectarrow", 2); 
addpacket(0x1af, 4, "changecart", 2); 
addpacket(0x1b0, 11, NULL); 
addpacket(0x1b1, 7, NULL); 
addpacket(0x1b2, -1, "openvending", 2, 4, 84, 85); 
addpacket(0x1b3, 67, NULL); 
addpacket(0x1b4, 12, NULL); 
addpacket(0x1b5, 18, NULL); 
addpacket(0x1b6, 114, NULL); 
addpacket(0x1b7, 6, NULL); 
addpacket(0x1b8, 3, NULL); 
addpacket(0x1b9, 6, NULL); 
addpacket(0x1ba, 26, "remove", 2); 
addpacket(0x1bb, 26, "shift", 2); 
addpacket(0x1bc, 26, "recall", 2); 
addpacket(0x1bd, 26, "summon", 2); 
addpacket(0x1be, 2, NULL); 
addpacket(0x1bf, 3, NULL); 
addpacket(0x1c0, 2, NULL); 
addpacket(0x1c1, 14, NULL); 
addpacket(0x1c2, 10, NULL); 
addpacket(0x1c3, -1, NULL); 
addpacket(0x1c4, 22, NULL); 
addpacket(0x1c5, 22, NULL); 
addpacket(0x1c6, 4, NULL); 
addpacket(0x1c7, 2, NULL); 
addpacket(0x1c8, 13, NULL); 
addpacket(0x1c9, 97, NULL); 
// addpacket(0x1ca, -1, NULL); 
addpacket(0x1cb, 9, NULL); 
addpacket(0x1cc, 9, NULL); 
addpacket(0x1cd, 30, NULL); 
addpacket(0x1ce, 6, "autospell", 2); 
addpacket(0x1cf, 28, NULL); 
addpacket(0x1d0, 8, NULL); 
addpacket(0x1d1, 14, NULL); 
addpacket(0x1d2, 10, NULL); 
addpacket(0x1d3, 35, NULL); 
addpacket(0x1d4, 6, NULL); 
addpacket(0x1d5, -1, "npcstringinput", 2, 4, 8); 
addpacket(0x1d6, 4, NULL); 
addpacket(0x1d7, 11, NULL); 
addpacket(0x1d8, 54, NULL); 
addpacket(0x1d9, 53, NULL); 
addpacket(0x1da, 60, NULL); 
addpacket(0x1db, 2, NULL); 
addpacket(0x1dc, -1, NULL); 
addpacket(0x1dd, 47, NULL); 
addpacket(0x1de, 33, NULL); 
addpacket(0x1df, 6, "gmreqaccname", 2); 
addpacket(0x1e0, 30, NULL); 
addpacket(0x1e1, 8, NULL); 
addpacket(0x1e2, 34, NULL); 
addpacket(0x1e3, 14, NULL); 
addpacket(0x1e4, 2, NULL); 
addpacket(0x1e5, 6, NULL); 
addpacket(0x1e6, 26, NULL); 
addpacket(0x1e7, 2, "sndoridori", 0); 
addpacket(0x1e8, 28, "createparty2", 2); 
addpacket(0x1e9, 81, NULL); 
addpacket(0x1ea, 6, NULL); 
addpacket(0x1eb, 10, NULL); 
addpacket(0x1ec, 26, NULL); 
addpacket(0x1ed, 2, "snexplosionspirits", 0); 
addpacket(0x1ee, -1, NULL); 
addpacket(0x1ef, -1, NULL); 
addpacket(0x1f0, -1, NULL); 
addpacket(0x1f1, -1, NULL); 
addpacket(0x1f2, 20, NULL); 
addpacket(0x1f3, 10, NULL); 
addpacket(0x1f4, 32, NULL); 
addpacket(0x1f5, 9, NULL); 
addpacket(0x1f6, 34, NULL); 
addpacket(0x1f7, 14, "adoptreply", 0); 
addpacket(0x1f8, 2, NULL); 
addpacket(0x1f9, 6, "adoptrequest", 0); 
addpacket(0x1fa, 48, NULL); 
addpacket(0x1fb, 56, NULL); 
addpacket(0x1fc, -1, NULL); 
addpacket(0x1fd, 4, "repairitem", 2); 
addpacket(0x1fe, 5, NULL); 
addpacket(0x1ff, 10, NULL); 
addpacket(0x200, 26, NULL); 
addpacket(0x201, -1, NULL); 
addpacket(0x202, 26, "friendslistadd", 2); 
addpacket(0x203, 10, "friendslistremove", 2, 6); 
addpacket(0x204, 18, NULL); 
addpacket(0x205, 26, NULL); 
addpacket(0x206, 11, NULL); 
addpacket(0x207, 34, NULL); 
addpacket(0x208, 11, "friendslistreply", 2, 6, 10); 
addpacket(0x209, 36, NULL); 
addpacket(0x20a, 10, NULL); 
// addpacket(0x20b, -1, NULL); 
// addpacket(0x20c, -1, NULL); 
addpacket(0x20d, -1, NULL); 
#if PACKETVER > 20040705
// packet_ver: 6
addpacket(0x72, 22, "wanttoconnection", 5, 9, 13, 17, 21); 
addpacket(0x85, 8, "walktoxy", 5); 
addpacket(0xa7, 13, "useitem", 5, 9); 
addpacket(0x113, 15, "useskilltoid", 4, 9, 11); 
addpacket(0x116, 15, "useskilltopos", 4, 9, 11, 13); 
addpacket(0x190, 95, "useskilltoposinfo", 4, 9, 11, 13, 15); 
addpacket(0x208, 14, "friendslistreply", 2, 6, 10); 
addpacket(0x20e, 24, NULL); 
#endif

#if PACKETVER > 20040713
// packet_ver: 7
addpacket(0x72, 39, "wanttoconnection", 12, 22, 30, 34, 38); 
addpacket(0x85, 9, "walktoxy", 6); 
addpacket(0x9b, 13, "changedir", 5, 12); 
addpacket(0x9f, 10, "takeitem", 6); 
addpacket(0xa7, 17, "useitem", 6, 13); 
addpacket(0x113, 19, "useskilltoid", 7, 9, 15); 
addpacket(0x116, 19, "useskilltopos", 7, 9, 15, 17); 
addpacket(0x190, 99, "useskilltoposinfo", 7, 9, 15, 17, 19); 
#endif

#if PACKETVER > 20040726
// packet_ver: 8
addpacket(0x72, 14, "dropitem", 5, 12); 
addpacket(0x7e, 33, "wanttoconnection", 12, 18, 24, 28, 32); 
addpacket(0x85, 20, "useskilltoid", 7, 12, 16); 
addpacket(0x89, 15, "getcharnamerequest", 11); 
addpacket(0x8c, 23, "useskilltopos", 3, 6, 17, 21); 
addpacket(0x94, 10, "takeitem", 6); 
addpacket(0x9b, 6, "walktoxy", 3); 
addpacket(0x9f, 13, "changedir", 5, 12); 
addpacket(0xa2, 103, "useskilltoposinfo", 3, 6, 17, 21, 23); 
addpacket(0xa7, 12, "solvecharname", 8); 
addpacket(0xf3, -1, "globalmessage", 2, 4); 
addpacket(0xf5, 17, "useitem", 6, 12); 
addpacket(0xf7, 10, "ticksend", 6); 
addpacket(0x113, 16, "movetokafra", 5, 12); 
addpacket(0x116, 2, "closekafra", 0); 
addpacket(0x190, 26, "movefromkafra", 10, 22); 
addpacket(0x193, 9, "actionrequest", 3, 8); 
#endif

#if PACKETVER > 20040809
// packet_ver: 9
addpacket(0x72, 17, "dropitem", 8, 15); 
addpacket(0x7e, 37, "wanttoconnection", 9, 21, 28, 32, 36); 
addpacket(0x85, 26, "useskilltoid", 11, 18, 22); 
addpacket(0x89, 12, "getcharnamerequest", 8); 
addpacket(0x8c, 40, "useskilltopos", 5, 15, 29, 38); 
addpacket(0x94, 13, "takeitem", 9); 
addpacket(0x9b, 15, "walktoxy", 12); 
addpacket(0x9f, 12, "changedir", 7, 11); 
addpacket(0xa2, 120, "useskilltoposinfo", 5, 15, 29, 38, 40); 
addpacket(0xa7, 11, "solvecharname", 7); 
addpacket(0xf5, 24, "useitem", 9, 20); 
addpacket(0xf7, 13, "ticksend", 9); 
addpacket(0x113, 23, "movetokafra", 5, 19); 
addpacket(0x190, 26, "movefromkafra", 11, 22); 
addpacket(0x193, 18, "actionrequest", 7, 17); 
#endif

#if PACKETVER > 20040816
addpacket(0x212, 26, "rc", 2); 
addpacket(0x213, 26, "check", 2); 
addpacket(0x214, 42, NULL); 
#endif

#if PACKETVER > 20040817
addpacket(0x20f, 10, "pvpinfo", 2, 6); 
addpacket(0x210, 22, NULL); 
#endif

#if PACKETVER > 20040906
// packet_ver: 10
addpacket(0x72, 20, "useitem", 9, 20); 
addpacket(0x7e, 19, "movetokafra", 3, 15); 
addpacket(0x85, 23, "actionrequest", 9, 22); 
addpacket(0x89, 9, "walktoxy", 6); 
addpacket(0x8c, 105, "useskilltoposinfo", 10, 14, 18, 23, 25); 
addpacket(0x94, 17, "dropitem", 6, 15); 
addpacket(0x9b, 14, "getcharnamerequest", 10); 
addpacket(0x9f, -1, "globalmessage", 2, 4); 
addpacket(0xa2, 14, "solvecharname", 10); 
addpacket(0xa7, 25, "useskilltopos", 10, 14, 18, 23); 
addpacket(0xf3, 10, "changedir", 4, 9); 
addpacket(0xf5, 34, "wanttoconnection", 7, 15, 25, 29, 33); 
addpacket(0xf7, 2, "closekafra", 0); 
addpacket(0x113, 11, "takeitem", 7); 
addpacket(0x116, 11, "ticksend", 7); 
addpacket(0x190, 22, "useskilltoid", 9, 15, 18); 
addpacket(0x193, 17, "movefromkafra", 3, 13); 
#endif

#if PACKETVER > 20040920
// packet_ver: 11
addpacket(0x72, 18, "useitem", 10, 14); 
addpacket(0x7e, 25, "movetokafra", 6, 21); 
addpacket(0x85, 9, "actionrequest", 3, 8); 
addpacket(0x89, 14, "walktoxy", 11); 
addpacket(0x8c, 109, "useskilltoposinfo", 16, 20, 23, 27, 29); 
addpacket(0x94, 19, "dropitem", 12, 17); 
addpacket(0x9b, 10, "getcharnamerequest", 6); 
addpacket(0xa2, 10, "solvecharname", 6); 
addpacket(0xa7, 29, "useskilltopos", 6, 20, 23, 27); 
addpacket(0xf3, 18, "changedir", 8, 17); 
addpacket(0xf5, 32, "wanttoconnection", 10, 17, 23, 27, 31); 
addpacket(0x113, 14, "takeitem", 10); 
addpacket(0x116, 14, "ticksend", 10); 
addpacket(0x190, 14, "useskilltoid", 4, 7, 10); 
addpacket(0x193, 12, "movefromkafra", 4, 8); 
#endif

#if PACKETVER > 20041005
// packet_ver: 12
addpacket(0x72, 17, "useitem", 6, 13); 
addpacket(0x7e, 16, "movetokafra", 5, 12); 
addpacket(0x89, 6, "walktoxy", 3); 
addpacket(0x8c, 103, "useskilltoposinfo", 2, 6, 17, 21, 23); 
addpacket(0x94, 14, "dropitem", 5, 12); 
addpacket(0x9b, 15, "getcharnamerequest", 11); 
addpacket(0xa2, 12, "solvecharname", 8); 
addpacket(0xa7, 23, "useskilltopos", 3, 6, 17, 21); 
addpacket(0xf3, 13, "changedir", 5, 12); 
addpacket(0xf5, 33, "wanttoconnection", 12, 18, 24, 28, 32); 
addpacket(0x113, 10, "takeitem", 6); 
addpacket(0x116, 10, "ticksend", 6); 
addpacket(0x190, 20, "useskilltoid", 7, 12, 16); 
addpacket(0x193, 26, "movefromkafra", 10, 22); 
#endif

#if PACKETVER > 20041025
// packet_ver: 13
addpacket(0x72, 13, "useitem", 5, 9); 
addpacket(0x7e, 13, "movetokafra", 6, 9); 
addpacket(0x85, 15, "actionrequest", 4, 14); 
addpacket(0x8c, 108, "useskilltoposinfo", 6, 9, 23, 26, 28); 
addpacket(0x94, 12, "dropitem", 6, 10); 
addpacket(0x9b, 10, "getcharnamerequest", 6); 
addpacket(0xa2, 16, "solvecharname", 12); 
addpacket(0xa7, 28, "useskilltopos", 6, 9, 23, 26); 
addpacket(0xf3, 15, "changedir", 6, 14); 
addpacket(0xf5, 29, "wanttoconnection", 5, 14, 20, 24, 28); 
addpacket(0x113, 9, "takeitem", 5); 
addpacket(0x116, 9, "ticksend", 5); 
addpacket(0x190, 26, "useskilltoid", 4, 10, 22); 
addpacket(0x193, 22, "movefromkafra", 12, 18); 
#endif

#if PACKETVER > 20041101
addpacket(0x84, -1, NULL); 
addpacket(0x215, 6, NULL); 
#endif

#if PACKETVER > 20041108
addpacket(0x84, 2, NULL); 
addpacket(0x216, 6, NULL); 
addpacket(0x217, 2, "blacksmith", 0); 
addpacket(0x218, 2, "alchemist", 0); 
addpacket(0x219, 282, NULL); 
addpacket(0x21a, 282, NULL); 
addpacket(0x21b, 10, NULL); 
addpacket(0x21c, 10, NULL); 
#endif

#if PACKETVER > 20041115
addpacket(0x21d, 6, "lesseffect", 2); 
#endif

#if PACKETVER > 20041129
// packet_ver: 14
addpacket(0x72, 22, "useskilltoid", 8, 12, 18); 
addpacket(0x7e, 30, "useskilltopos", 4, 9, 22, 28); 
addpacket(0x85, -1, "globalmessage", 2, 4); 
addpacket(0x89, 7, "ticksend", 3); 
addpacket(0x8c, 13, "getcharnamerequest", 9); 
addpacket(0x94, 14, "movetokafra", 4, 10); 
addpacket(0x9b, 2, "closekafra", 0); 
addpacket(0x9f, 18, "actionrequest", 6, 17); 
addpacket(0xa2, 7, "takeitem", 3); 
addpacket(0xa7, 7, "walktoxy", 4); 
addpacket(0xf3, 8, "changedir", 3, 7); 
addpacket(0xf5, 29, "wanttoconnection", 3, 10, 20, 24, 28); 
addpacket(0xf7, 14, "solvecharname", 10); 
addpacket(0x113, 110, "useskilltoposinfo", 4, 9, 22, 28, 30); 
addpacket(0x116, 12, "dropitem", 4, 10); 
addpacket(0x190, 15, "useitem", 3, 11); 
addpacket(0x193, 21, "movefromkafra", 4, 17); 
addpacket(0x221, -1, NULL); 
addpacket(0x222, 6, "weaponrefine", 2); 
addpacket(0x223, 8, NULL); 
#endif

#if PACKETVER > 20041213
// skipped: many packets being set to -1
addpacket(0x66, 3, NULL); 
addpacket(0x70, 3, NULL); 
addpacket(0x1ca, 3, NULL); 
addpacket(0x21e, 6, NULL); 
addpacket(0x21f, 66, NULL); 
addpacket(0x220, 10, NULL); 
#endif

#if PACKETVER > 20050110
// packet_ver: 15
addpacket(0x72, 26, "useskilltoid", 8, 16, 22); 
addpacket(0x7e, 114, "useskilltoposinfo", 10, 18, 22, 32, 34); 
addpacket(0x85, 23, "changedir", 12, 22); 
addpacket(0x89, 9, "ticksend", 5); 
addpacket(0x8c, 8, "getcharnamerequest", 4); 
addpacket(0x94, 20, "movetokafra", 10, 16); 
addpacket(0x9b, 32, "wanttoconnection", 3, 12, 23, 27, 31); 
addpacket(0x9f, 17, "useitem", 5, 13); 
addpacket(0xa2, 11, "solvecharname", 7); 
addpacket(0xa7, 13, "walktoxy", 10); 
addpacket(0xf3, -1, "globalmessage", 2, 4); 
addpacket(0xf5, 9, "takeitem", 5); 
addpacket(0xf7, 21, "movefromkafra", 11, 17); 
addpacket(0x113, 34, "useskilltopos", 10, 18, 22, 32); 
addpacket(0x116, 20, "dropitem", 15, 18); 
addpacket(0x190, 20, "actionrequest", 9, 19); 
addpacket(0x193, 2, "closekafra", 0); 
#endif

#if PACKETVER > 20050328
addpacket(0x224, 10, NULL); 
addpacket(0x225, 2, "taekwon", 0); 
addpacket(0x226, 282, NULL); 
#endif

#if PACKETVER > 20050404
addpacket(0x227, 18, NULL); 
addpacket(0x228, 18, NULL); 
#endif

#if PACKETVER > 20050411
addpacket(0x229, 15, NULL); 
addpacket(0x22a, 58, NULL); 
addpacket(0x22b, 57, NULL); 
addpacket(0x22c, 64, NULL); 
#endif

#if PACKETVER > 20050425
addpacket(0x22d, 5, "hommenu", 2, 4); 
addpacket(0x232, 9, "hommoveto", 2, 6); 
addpacket(0x233, 11, "homattack", 2, 6, 10); 
addpacket(0x234, 6, "hommovetomaster", 2); 
#endif

#if PACKETVER > 20050509
// packet_ver: 16
addpacket(0x72, 25, "useskilltoid", 6, 10, 21); 
addpacket(0x7e, 102, "useskilltoposinfo", 5, 9, 12, 20, 22); 
addpacket(0x85, 11, "changedir", 7, 10); 
addpacket(0x89, 8, "ticksend", 4); 
addpacket(0x8c, 11, "getcharnamerequest", 7); 
addpacket(0x94, 14, "movetokafra", 7, 10); 
addpacket(0x9b, 26, "wanttoconnection", 4, 9, 17, 21, 25); 
addpacket(0x9f, 14, "useitem", 4, 10); 
addpacket(0xa2, 15, "solvecharname", 11); 
addpacket(0xa7, 8, "walktoxy", 5); 
addpacket(0xf5, 8, "takeitem", 4); 
addpacket(0xf7, 22, "movefromkafra", 14, 18); 
addpacket(0x113, 22, "useskilltopos", 5, 9, 12, 20); 
addpacket(0x116, 10, "dropitem", 5, 8); 
addpacket(0x190, 19, "actionrequest", 5, 18); 
#endif

#if PACKETVER > 20050523
addpacket(0x22e, 69, NULL); 
addpacket(0x230, 12, NULL); 
#endif

#if PACKETVER > 20050530
addpacket(0x22e, 71, NULL); 
addpacket(0x235, -1, NULL); 
addpacket(0x236, 10, NULL); 
addpacket(0x237, 2, "rankingpk", 0); 
addpacket(0x238, 282, NULL); 
#endif

#if PACKETVER > 20050531
addpacket(0x216, 2, NULL); 
addpacket(0x239, 11, NULL); 
#endif

#if PACKETVER > 20050608
addpacket(0x216, 6, NULL); 
addpacket(0x217, 2, "blacksmith", 0); 
addpacket(0x22f, 5, NULL); 
addpacket(0x231, 26, "changehomunculusname", 0); 
addpacket(0x23a, 4, NULL); 
addpacket(0x23b, 36, "storagepassword", 2, 4, 20); 
addpacket(0x23c, 6, NULL); 
#endif

#if PACKETVER > 20050622
addpacket(0x22e, 71, NULL); 
#endif

#if PACKETVER > 20050628
// packet_ver: 17
addpacket(0x72, 34, "useskilltoid", 6, 17, 30); 
addpacket(0x7e, 113, "useskilltoposinfo", 12, 15, 18, 31, 33); 
addpacket(0x85, 17, "changedir", 8, 16); 
addpacket(0x89, 13, "ticksend", 9); 
addpacket(0x8c, 8, "getcharnamerequest", 4); 
addpacket(0x94, 31, "movetokafra", 16, 27); 
addpacket(0x9b, 32, "wanttoconnection", 9, 15, 23, 27, 31); 
addpacket(0x9f, 19, "useitem", 9, 15); 
addpacket(0xa2, 9, "solvecharname", 5); 
addpacket(0xa7, 11, "walktoxy", 8); 
addpacket(0xf5, 13, "takeitem", 9); 
addpacket(0xf7, 18, "movefromkafra", 11, 14); 
addpacket(0x113, 33, "useskilltopos", 12, 15, 18, 31); 
addpacket(0x116, 12, "dropitem", 3, 10); 
addpacket(0x190, 24, "actionrequest", 11, 23); 
addpacket(0x216, -1, NULL); 
addpacket(0x23d, -1, NULL); 
addpacket(0x23e, 4, NULL); 
#endif

#if PACKETVER > 20050718
// packet_ver: 18
addpacket(0x72, 19, "useskilltoid", 5, 11, 15); 
addpacket(0x7e, 110, "useskilltoposinfo", 9, 15, 23, 28, 30); 
addpacket(0x85, 11, "changedir", 6, 10); 
addpacket(0x89, 7, "ticksend", 3); 
addpacket(0x8c, 11, "getcharnamerequest", 7); 
addpacket(0x94, 21, "movetokafra", 12, 17); 
addpacket(0x9b, 31, "wanttoconnection", 3, 13, 22, 26, 30); 
addpacket(0x9f, 12, "useitem", 3, 8); 
addpacket(0xa2, 18, "solvecharname", 14); 
addpacket(0xa7, 15, "walktoxy", 12); 
addpacket(0xf5, 7, "takeitem", 3); 
addpacket(0xf7, 13, "movefromkafra", 5, 9); 
addpacket(0x113, 30, "useskilltopos", 9, 15, 23, 28); 
addpacket(0x116, 12, "dropitem", 6, 10); 
addpacket(0x190, 21, "actionrequest", 5, 20); 
addpacket(0x216, 6, NULL); 
addpacket(0x23f, 2, "mailrefresh", 0); 
addpacket(0x240, 8, NULL); 
addpacket(0x241, 6, "mailread", 2); 
addpacket(0x242, -1, NULL); 
addpacket(0x243, 6, "maildelete", 2); 
addpacket(0x244, 6, "mailgetattach", 2); 
addpacket(0x245, 7, NULL); 
addpacket(0x246, 4, "mailwinopen", 2); 
addpacket(0x247, 8, "mailsetattach", 2, 4); 
addpacket(0x248, 68, NULL); 
addpacket(0x249, 3, NULL); 
addpacket(0x24a, 70, NULL); 
addpacket(0x24b, 4, "auctioncancelreg", 0); 
addpacket(0x24c, 8, "auctionsetitem", 0); 
addpacket(0x24d, 14, NULL); 
addpacket(0x24e, 6, "auctioncancel", 0); 
addpacket(0x24f, 10, "auctionbid", 0); 
addpacket(0x250, 3, NULL); 
addpacket(0x251, 2, NULL); 
addpacket(0x252, -1, NULL); 
#endif

#if PACKETVER > 20050719
// packet_ver: 19
addpacket(0x72, 34, "useskilltoid", 6, 17, 30); 
addpacket(0x7e, 113, "useskilltoposinfo", 12, 15, 18, 31, 33); 
addpacket(0x85, 17, "changedir", 8, 16); 
addpacket(0x89, 13, "ticksend", 9); 
addpacket(0x8c, 8, "getcharnamerequest", 4); 
addpacket(0x94, 31, "movetokafra", 16, 27); 
addpacket(0x9b, 32, "wanttoconnection", 9, 15, 23, 27, 31); 
addpacket(0x9f, 19, "useitem", 9, 15); 
addpacket(0xa2, 9, "solvecharname", 5); 
addpacket(0xa7, 11, "walktoxy", 8); 
addpacket(0xf5, 13, "takeitem", 9); 
addpacket(0xf7, 18, "movefromkafra", 11, 14); 
addpacket(0x113, 33, "useskilltopos", 12, 15, 18, 31); 
addpacket(0x116, 12, "dropitem", 3, 10); 
addpacket(0x190, 24, "actionrequest", 11, 23); 
#endif

#if PACKETVER > 20050801
addpacket(0x245, 3, NULL); 
addpacket(0x251, 4, NULL); 
#endif

#if PACKETVER > 20050808
addpacket(0x24d, 12, "auctionregister", 0); 
addpacket(0x24e, 4, NULL); 
#endif

#if PACKETVER > 20050817
addpacket(0x253, 3, NULL); 
addpacket(0x254, 3, "feelsaveok", 0); 
#endif

#if PACKETVER > 20050829
addpacket(0x240, -1, NULL); 
addpacket(0x248, -1, "mailsend", 2, 4, 28, 68); 
addpacket(0x255, 5, NULL); 
addpacket(0x256, -1, NULL); 
addpacket(0x257, 8, NULL); 
#endif

#if PACKETVER > 20050912
addpacket(0x256, 5, NULL); 
addpacket(0x258, 2, NULL); 
addpacket(0x259, 3, NULL); 
#endif

#if PACKETVER > 20051010
addpacket(0x20e, 32, NULL); 
addpacket(0x25a, -1, NULL); 
addpacket(0x25b, 6, "cooking", 0); 
#endif

#if PACKETVER > 20051013
addpacket(0x7a, 6, NULL); 
addpacket(0x251, 32, NULL); 
addpacket(0x25c, 4, "auctionbuysell", 0); 
#endif

#if PACKETVER > 20051017
addpacket(0x7a, 58, NULL); 
addpacket(0x25d, 6, "auctionclose", 0); 
addpacket(0x25e, 4, NULL); 
#endif

#if PACKETVER > 20051024
addpacket(0x25f, 6, NULL); 
addpacket(0x260, 6, NULL); 
#endif

#if PACKETVER > 20051107
addpacket(0x24e, 6, "auctioncancel", 0); 
addpacket(0x251, 34, "auctionsearch", 0); 
#endif

#if PACKETVER > 20060109
addpacket(0x261, 11, NULL); 
addpacket(0x262, 11, NULL); 
addpacket(0x263, 11, NULL); 
addpacket(0x264, 20, NULL); 
addpacket(0x265, 20, NULL); 
addpacket(0x266, 30, NULL); 
addpacket(0x267, 4, NULL); 
addpacket(0x268, 4, NULL); 
addpacket(0x269, 4, NULL); 
addpacket(0x26a, 4, NULL); 
addpacket(0x26b, 4, NULL); 
addpacket(0x26c, 4, NULL); 
addpacket(0x26d, 4, NULL); 
addpacket(0x26f, 2, NULL); 
addpacket(0x270, 2, NULL); 
addpacket(0x271, 38, NULL); 
addpacket(0x272, 44, NULL); 
#endif

#if PACKETVER > 20060126
addpacket(0x271, 40, NULL); 
#endif

#if PACKETVER > 20060306
addpacket(0x273, 6, NULL); 
addpacket(0x274, 8, NULL); 
#endif

#if PACKETVER > 20060313
addpacket(0x273, 30, "mailreturn", 2, 6); 
#endif

#if PACKETVER > 20060327
// packet_ver: 20
addpacket(0x72, 26, "useskilltoid", 11, 18, 22); 
addpacket(0x7e, 120, "useskilltoposinfo", 5, 15, 29, 38, 40); 
addpacket(0x85, 12, "changedir", 7, 11); 
// addpacket(0x89, 13, "ticksend", 9); 
addpacket(0x8c, 12, "getcharnamerequest", 8); 
addpacket(0x94, 23, "movetokafra", 5, 19); 
addpacket(0x9b, 37, "wanttoconnection", 9, 21, 28, 32, 36); 
addpacket(0x9f, 24, "useitem", 9, 20); 
addpacket(0xa2, 11, "solvecharname", 7); 
addpacket(0xa7, 15, "walktoxy", 12); 
addpacket(0xf5, 13, "takeitem", 9); 
addpacket(0xf7, 26, "movefromkafra", 11, 22); 
addpacket(0x113, 40, "useskilltopos", 5, 15, 29, 38); 
addpacket(0x116, 17, "dropitem", 8, 15); 
addpacket(0x190, 18, "actionrequest", 7, 17); 
#endif

#if PACKETVER > 20061023
addpacket(0x6d, 110, NULL); 
#endif

#if PACKETVER > 20060424
addpacket(0x23e, 8, NULL); 
addpacket(0x277, 84, NULL); 
addpacket(0x278, 2, NULL); 
addpacket(0x279, 2, NULL); 
addpacket(0x27a, -1, NULL); 
addpacket(0x27b, 14, NULL); 
addpacket(0x27c, 60, NULL); 
addpacket(0x27d, 62, NULL); 
addpacket(0x27e, -1, NULL); 
addpacket(0x27f, 8, NULL); 
addpacket(0x280, 12, NULL); 
addpacket(0x281, 4, NULL); 
addpacket(0x282, 284, NULL); 
addpacket(0x283, 6, NULL); 
addpacket(0x284, 14, NULL); 
addpacket(0x285, 6, NULL); 
addpacket(0x286, 4, NULL); 
addpacket(0x287, -1, NULL); 
addpacket(0x288, 6, NULL); 
addpacket(0x289, 8, NULL); 
addpacket(0x28a, 18, NULL); 
addpacket(0x28b, -1, NULL); 
addpacket(0x28c, 46, NULL); 
addpacket(0x28d, 34, NULL); 
addpacket(0x28e, 4, NULL); 
addpacket(0x28f, 6, NULL); 
addpacket(0x290, 4, NULL); 
addpacket(0x291, 4, NULL); 
addpacket(0x292, 2, "autorevive", 0); 
addpacket(0x293, 70, NULL); 
addpacket(0x294, 10, NULL); 
addpacket(0x295, -1, NULL); 
addpacket(0x296, -1, NULL); 
addpacket(0x297, -1, NULL); 
addpacket(0x298, 8, NULL); 
addpacket(0x299, 6, NULL); 
addpacket(0x29a, 27, NULL); 
addpacket(0x29c, 66, NULL); 
addpacket(0x29d, -1, NULL); 
addpacket(0x29e, 11, NULL); 
addpacket(0x29f, 3, "mermenu", 0); 
addpacket(0x2a0, -1, NULL); 
addpacket(0x2a1, -1, NULL); 
addpacket(0x2a2, 8, NULL); 
#endif

#if PACKETVER > 20070108
// packet_ver: 21
addpacket(0x72, 30, "useskilltoid", 10, 14, 26); 
addpacket(0x7e, 120, "useskilltoposinfo", 10, 19, 23, 38, 40); 
addpacket(0x85, 14, "changedir", 10, 13); 
addpacket(0x89, 11, "ticksend", 7); 
addpacket(0x8c, 17, "getcharnamerequest", 13); 
addpacket(0x94, 17, "movetokafra", 4, 13); 
addpacket(0x9b, 35, "wanttoconnection", 7, 21, 26, 30, 34); 
addpacket(0x9f, 21, "useitem", 7, 17); 
addpacket(0xa2, 10, "solvecharname", 6); 
addpacket(0xa7, 8, "walktoxy", 5); 
addpacket(0xf5, 11, "takeitem", 7); 
addpacket(0xf7, 15, "movefromkafra", 3, 11); 
addpacket(0x113, 40, "useskilltopos", 10, 19, 23, 38); 
addpacket(0x116, 19, "dropitem", 11, 17); 
addpacket(0x190, 10, "actionrequest", 4, 9); 
#endif

#if PACKETVER > 20070122
addpacket(0x2a3, 18, NULL); 
addpacket(0x2a4, 2, NULL); 
#endif

#if PACKETVER > 20070129
addpacket(0x29b, 72, NULL); 
addpacket(0x2a3, -1, NULL); 
addpacket(0x2a4, -1, NULL); 
addpacket(0x2a5, 8, NULL); 
#endif

#if PACKETVER > 20070205
addpacket(0x2aa, 4, NULL); 
addpacket(0x2ab, 36, NULL); 
addpacket(0x2ac, 6, NULL); 
#endif

#if PACKETVER > 20070212
// packet_ver: 22
addpacket(0x72, 25, "useskilltoid", 6, 10, 21); 
addpacket(0x7e, 102, "useskilltoposinfo", 5, 9, 12, 20, 22); 
addpacket(0x85, 11, "changedir", 7, 10); 
addpacket(0x89, 8, "ticksend", 4); 
addpacket(0x8c, 11, "getcharnamerequest", 7); 
addpacket(0x94, 14, "movetokafra", 7, 10); 
addpacket(0x9b, 26, "wanttoconnection", 4, 9, 17, 21, 25); 
addpacket(0x9f, 14, "useitem", 4, 10); 
addpacket(0xa2, 15, "solvecharname", 11); 
// addpacket(0xa7, 8, "walktoxy", 5); 
addpacket(0xf5, 8, "takeitem", 4); 
addpacket(0xf7, 22, "movefromkafra", 14, 18); 
addpacket(0x113, 22, "useskilltopos", 5, 9, 12, 20); 
addpacket(0x116, 10, "dropitem", 5, 8); 
addpacket(0x190, 19, "actionrequest", 5, 18); 
#endif

#if PACKETVER > 20070507
addpacket(0x1fd, 15, "repairitem", 2); 
#endif

#if PACKETVER > 20070227
addpacket(0x288, 10, "cashshopbuy", 2, 4, 6); 
addpacket(0x289, 12, NULL); 
addpacket(0x2a6, 22, NULL); 
addpacket(0x2a7, 22, NULL); 
addpacket(0x2a8, 162, NULL); 
addpacket(0x2a9, 58, NULL); 
addpacket(0x2ad, 8, NULL); 
addpacket(0x2b0, 85, NULL); 
addpacket(0x2b1, -1, NULL); 
addpacket(0x2b2, -1, NULL); 
addpacket(0x2b3, 107, NULL); 
addpacket(0x2b4, 6, NULL); 
addpacket(0x2b5, -1, NULL); 
addpacket(0x2b6, 7, "queststate", 2, 6); 
addpacket(0x2b7, 7, NULL); 
addpacket(0x2b8, 22, NULL); 
addpacket(0x2b9, 191, NULL); 
addpacket(0x2ba, 11, "hotkey", 2, 4, 5, 9); 
addpacket(0x2bb, 8, NULL); 
addpacket(0x2bc, 6, NULL); 
addpacket(0x2bf, 10, NULL); 
addpacket(0x2c0, 2, NULL); 
addpacket(0x2c1, -1, NULL); 
addpacket(0x2c2, -1, NULL); 
addpacket(0x2c4, 26, "partyinvite2", 2); 
addpacket(0x2c5, 30, NULL); 
addpacket(0x2c6, 30, NULL); 
addpacket(0x2c7, 7, "replypartyinvite2", 2, 6); 
addpacket(0x2c8, 3, NULL); 
addpacket(0x2c9, 3, NULL); 
addpacket(0x2ca, 3, NULL); 
addpacket(0x2cb, 20, NULL); 
addpacket(0x2cc, 4, NULL); 
addpacket(0x2cd, 26, NULL); 
addpacket(0x2ce, 10, NULL); 
addpacket(0x2cf, 6, NULL); 
addpacket(0x2d0, -1, NULL); 
addpacket(0x2d1, -1, NULL); 
addpacket(0x2d2, -1, NULL); 
addpacket(0x2d3, 4, NULL); 
addpacket(0x2d4, 29, NULL); 
addpacket(0x2d5, 2, NULL); 
addpacket(0x2d6, 6, "viewplayerequip", 2); 
addpacket(0x2d7, -1, NULL); 
addpacket(0x2d8, 10, "equiptickbox", 6); 
addpacket(0x2d9, 10, NULL); 
addpacket(0x2da, 3, NULL); 
addpacket(0x2db, -1, "battlechat", 2, 4); 
addpacket(0x2dc, -1, NULL); 
addpacket(0x2dd, 32, NULL); 
addpacket(0x2de, 6, NULL); 
addpacket(0x2df, 36, NULL); 
addpacket(0x2e0, 34, NULL); 
#endif

#if PACKETVER > 20071023
addpacket(0x2cb, 65, NULL); 
addpacket(0x2cd, 71, NULL); 
#endif

#if PACKETVER > 20071106
addpacket(0x78, 55, NULL); 
addpacket(0x7c, 42, NULL); 
addpacket(0x22c, 65, NULL); 
addpacket(0x29b, 80, NULL); 
#endif

#if PACKETVER > 20071113
addpacket(0x2e1, 33, NULL); 
#endif

#if PACKETVER > 20071120
// 0x01df,10 <- ???
addpacket(0x2e2, 14, NULL); 
addpacket(0x2e3, 25, NULL); 
addpacket(0x2e4, 8, NULL); 
addpacket(0x2e5, 8, NULL); 
addpacket(0x2e6, 6, NULL); 
#endif

#if PACKETVER > 20071127
addpacket(0x2e7, -1, NULL); 
#endif

#if PACKETVER > 20080102
addpacket(0x1df, 6, "gmreqaccname", 2); 
addpacket(0x2e8, -1, NULL); 
addpacket(0x2e9, -1, NULL); 
addpacket(0x2ea, -1, NULL); 
addpacket(0x2eb, 13, NULL); 
addpacket(0x2ec, 67, NULL); 
addpacket(0x2ed, 59, NULL); 
addpacket(0x2ee, 60, NULL); 
addpacket(0x2ef, 8, NULL); 
#endif

#if PACKETVER > 20080318
addpacket(0x2bf, -1, NULL); 
addpacket(0x2c0, -1, NULL); 
addpacket(0x2f0, 10, NULL); 
addpacket(0x2f1, 2, "progressbar", 0); 
addpacket(0x2f2, 2, NULL); 
#endif

#if PACKETVER > 20080325
addpacket(0x2f3, -1, NULL); 
addpacket(0x2f4, -1, NULL); 
addpacket(0x2f5, -1, NULL); 
addpacket(0x2f6, -1, NULL); 
addpacket(0x2f7, -1, NULL); 
addpacket(0x2f8, -1, NULL); 
addpacket(0x2f9, -1, NULL); 
addpacket(0x2fa, -1, NULL); 
addpacket(0x2fb, -1, NULL); 
addpacket(0x2fc, -1, NULL); 
addpacket(0x2fd, -1, NULL); 
addpacket(0x2fe, -1, NULL); 
addpacket(0x2ff, -1, NULL); 
addpacket(0x300, -1, NULL); 
#endif

#if PACKETVER > 20080401
addpacket(0x301, -1, NULL); 
addpacket(0x302, -1, NULL); 
addpacket(0x303, -1, NULL); 
addpacket(0x304, -1, NULL); 
addpacket(0x305, -1, NULL); 
addpacket(0x306, -1, NULL); 
addpacket(0x307, -1, NULL); 
addpacket(0x308, -1, NULL); 
addpacket(0x309, -1, NULL); 
addpacket(0x30a, -1, NULL); 
addpacket(0x30b, -1, NULL); 
addpacket(0x30c, -1, NULL); 
addpacket(0x30d, -1, NULL); 
addpacket(0x30e, -1, NULL); 
addpacket(0x30f, -1, NULL); 
addpacket(0x310, -1, NULL); 
addpacket(0x311, -1, NULL); 
addpacket(0x312, -1, NULL); 
addpacket(0x313, -1, NULL); 
addpacket(0x314, -1, NULL); 
addpacket(0x315, -1, NULL); 
addpacket(0x316, -1, NULL); 
addpacket(0x317, -1, NULL); 
addpacket(0x318, -1, NULL); 
addpacket(0x319, -1, NULL); 
addpacket(0x31a, -1, NULL); 
addpacket(0x31b, -1, NULL); 
addpacket(0x31c, -1, NULL); 
addpacket(0x31d, -1, NULL); 
addpacket(0x31e, -1, NULL); 
addpacket(0x31f, -1, NULL); 
addpacket(0x320, -1, NULL); 
addpacket(0x321, -1, NULL); 
addpacket(0x322, -1, NULL); 
addpacket(0x323, -1, NULL); 
addpacket(0x324, -1, NULL); 
addpacket(0x325, -1, NULL); 
addpacket(0x326, -1, NULL); 
addpacket(0x327, -1, NULL); 
addpacket(0x328, -1, NULL); 
addpacket(0x329, -1, NULL); 
addpacket(0x32a, -1, NULL); 
addpacket(0x32b, -1, NULL); 
addpacket(0x32c, -1, NULL); 
addpacket(0x32d, -1, NULL); 
addpacket(0x32e, -1, NULL); 
addpacket(0x32f, -1, NULL); 
addpacket(0x330, -1, NULL); 
addpacket(0x331, -1, NULL); 
addpacket(0x332, -1, NULL); 
addpacket(0x333, -1, NULL); 
addpacket(0x334, -1, NULL); 
addpacket(0x335, -1, NULL); 
addpacket(0x336, -1, NULL); 
addpacket(0x337, -1, NULL); 
addpacket(0x338, -1, NULL); 
addpacket(0x339, -1, NULL); 
addpacket(0x33a, -1, NULL); 
addpacket(0x33b, -1, NULL); 
addpacket(0x33c, -1, NULL); 
addpacket(0x33d, -1, NULL); 
addpacket(0x33e, -1, NULL); 
addpacket(0x33f, -1, NULL); 
addpacket(0x340, -1, NULL); 
addpacket(0x341, -1, NULL); 
addpacket(0x342, -1, NULL); 
addpacket(0x343, -1, NULL); 
addpacket(0x344, -1, NULL); 
addpacket(0x345, -1, NULL); 
addpacket(0x346, -1, NULL); 
addpacket(0x347, -1, NULL); 
addpacket(0x348, -1, NULL); 
addpacket(0x349, -1, NULL); 
addpacket(0x34a, -1, NULL); 
addpacket(0x34b, -1, NULL); 
addpacket(0x34c, -1, NULL); 
addpacket(0x34d, -1, NULL); 
addpacket(0x34e, -1, NULL); 
addpacket(0x34f, -1, NULL); 
addpacket(0x350, -1, NULL); 
addpacket(0x351, -1, NULL); 
addpacket(0x352, -1, NULL); 
addpacket(0x353, -1, NULL); 
addpacket(0x354, -1, NULL); 
addpacket(0x355, -1, NULL); 
addpacket(0x356, -1, NULL); 
addpacket(0x357, -1, NULL); 
addpacket(0x358, -1, NULL); 
addpacket(0x359, -1, NULL); 
addpacket(0x35a, -1, NULL); 
#endif

#if PACKETVER > 20080527
addpacket(0x35b, -1, NULL); 
addpacket(0x35c, 2, NULL); 
addpacket(0x35d, -1, NULL); 
addpacket(0x35e, 2, NULL); 
addpacket(0x35f, -1, NULL); 
addpacket(0x389, -1, NULL); 
#endif

#if PACKETVER > 20080820
addpacket(0x40c, -1, NULL); 
addpacket(0x40d, -1, NULL); 
addpacket(0x40e, -1, NULL); 
addpacket(0x40f, -1, NULL); 
addpacket(0x410, -1, NULL); 
addpacket(0x411, -1, NULL); 
addpacket(0x412, -1, NULL); 
addpacket(0x413, -1, NULL); 
addpacket(0x414, -1, NULL); 
addpacket(0x415, -1, NULL); 
addpacket(0x416, -1, NULL); 
addpacket(0x417, -1, NULL); 
addpacket(0x418, -1, NULL); 
addpacket(0x419, -1, NULL); 
addpacket(0x41a, -1, NULL); 
addpacket(0x41b, -1, NULL); 
addpacket(0x41c, -1, NULL); 
addpacket(0x41d, -1, NULL); 
addpacket(0x41e, -1, NULL); 
addpacket(0x41f, -1, NULL); 
addpacket(0x420, -1, NULL); 
addpacket(0x421, -1, NULL); 
addpacket(0x422, -1, NULL); 
addpacket(0x423, -1, NULL); 
addpacket(0x424, -1, NULL); 
addpacket(0x425, -1, NULL); 
addpacket(0x426, -1, NULL); 
addpacket(0x427, -1, NULL); 
addpacket(0x428, -1, NULL); 
addpacket(0x429, -1, NULL); 
addpacket(0x42a, -1, NULL); 
addpacket(0x42b, -1, NULL); 
addpacket(0x42c, -1, NULL); 
addpacket(0x42d, -1, NULL); 
addpacket(0x42e, -1, NULL); 
addpacket(0x42f, -1, NULL); 
addpacket(0x430, -1, NULL); 
addpacket(0x431, -1, NULL); 
addpacket(0x432, -1, NULL); 
addpacket(0x433, -1, NULL); 
addpacket(0x434, -1, NULL); 
addpacket(0x435, -1, NULL); 
#endif

#if PACKETVER > 20080910
// packet_ver: 23
addpacket(0x436, 19, "wanttoconnection", 2, 6, 10, 14, 18); 
addpacket(0x437, 7, "actionrequest", 2, 6); 
addpacket(0x438, 10, "useskilltoid", 2, 4, 6); 
addpacket(0x439, 8, "useitem", 2, 4); 
#endif

#if PACKETVER > 20081113
addpacket(0x43d, 8, NULL); 
addpacket(0x43e, -1, NULL); 
addpacket(0x43f, 8, NULL); 
#endif

#if PACKETVER > 20081126
addpacket(0x1a2, 37, NULL); 
addpacket(0x440, 10, NULL); 
addpacket(0x441, 4, NULL); 
#endif

#if PACKETVER > 20081210
addpacket(0x442, -1, NULL); 
addpacket(0x443, 8, "skillselectmenu", 2, 6); 
#endif

#if PACKETVER > 20090114
addpacket(0x43f, 25, NULL); 
addpacket(0x444, -1, NULL); 
addpacket(0x445, 10, NULL); 
#endif

#if PACKETVER > 20090218
addpacket(0x446, 14, NULL); 
#endif

#if PACKETVER > 20090225
addpacket(0x448, -1, NULL); 
#endif

#if PACKETVER > 20090330
addpacket(0x449, 4, NULL); 
#endif

#if PACKETVER > 20090408
addpacket(0x2a6, -1, NULL); 
addpacket(0x2a7, -1, NULL); 
addpacket(0x44a, 6, NULL); 
// Renewal Clients
#endif

#if PACKETVER > 20080827
// packet_ver: 24
addpacket(0x72, 22, "useskilltoid", 9, 15, 18); 
addpacket(0x7c, 44, NULL); 
addpacket(0x7e, 105, "useskilltoposinfo", 10, 14, 18, 23, 25); 
addpacket(0x85, 10, "changedir", 4, 9); 
addpacket(0x89, 11, "ticksend", 7); 
addpacket(0x8c, 14, "getcharnamerequest", 10); 
addpacket(0x94, 19, "movetokafra", 3, 15); 
addpacket(0x9b, 34, "wanttoconnection", 7, 15, 25, 29, 33); 
addpacket(0x9f, 20, "useitem", 7, 20); 
addpacket(0xa2, 14, "solvecharname", 10); 
addpacket(0xa7, 9, "walktoxy", 6); 
addpacket(0xf5, 11, "takeitem", 7); 
addpacket(0xf7, 17, "movefromkafra", 3, 13); 
addpacket(0x113, 25, "useskilltopos", 10, 14, 18, 23); 
addpacket(0x116, 17, "dropitem", 6, 15); 
addpacket(0x190, 23, "actionrequest", 9, 22); 
addpacket(0x2e2, 20, NULL); 
addpacket(0x2e3, 22, NULL); 
addpacket(0x2e4, 11, NULL); 
addpacket(0x2e5, 9, NULL); 
#endif

#if PACKETVER > 20080910
// packet_ver: 25
addpacket(0x436, 19, "wanttoconnection", 2, 6, 10, 14, 18); 
addpacket(0x437, 7, "actionrequest", 2, 6); 
addpacket(0x438, 10, "useskilltoid", 2, 4, 6); 
addpacket(0x439, 8, "useitem", 2, 4); 
#endif

#if PACKETVER > 20081112
addpacket(0x43d, 8, NULL); 
// addpacket(0x43e, -1, NULL); 
addpacket(0x43f, 8, NULL); 
#endif

#if PACKETVER > 20081217
addpacket(0x1a2, 37, NULL); 
// addpacket(0x440, 10, NULL); 
// addpacket(0x441, 4, NULL); 
// addpacket(0x442, 8, NULL); 
// addpacket(0x443, 8, NULL); 
#endif

#if PACKETVER > 20081217
addpacket(0x6d, 114, NULL); 
#endif

#if PACKETVER > 20090121
addpacket(0x43f, 25, NULL); 
// addpacket(0x444, -1, NULL); 
// addpacket(0x445, 10, NULL); 
#endif

#if PACKETVER > 20090218
// addpacket(0x446, 14, NULL); 
#endif

#if PACKETVER > 20090226
// addpacket(0x448, -1, NULL); 
#endif

#if PACKETVER > 20090401
// addpacket(0x449, 4, NULL); 
#endif

#if PACKETVER > 20090514
// addpacket(0x44b, 2, NULL); 
#endif

#if PACKETVER > 20090520
// addpacket(0x7d0, 6, NULL); 
// addpacket(0x7d1, 2, NULL); 
// addpacket(0x7d2, -1, NULL); 
// addpacket(0x7d3, 4, NULL); 
// addpacket(0x7d4, 4, NULL); 
// addpacket(0x7d5, 4, NULL); 
// addpacket(0x7d6, 4, NULL); 
// addpacket(0x447, 2, NULL); 
#endif

#if PACKETVER > 20090603
addpacket(0x7d7, 8, "partychangeoption", 2, 6, 7); 
addpacket(0x7d8, 8, NULL); 
addpacket(0x7d9, 254, NULL); 
addpacket(0x7da, 6, "partychangeleader", 2); 
#endif

#if PACKETVER > 20090610
// addpacket(0x7db, 8, NULL); 
#endif

#if PACKETVER > 20090617
addpacket(0x7d9, 268, NULL); 
// addpacket(0x7dc, 6, NULL); 
// addpacket(0x7dd, 54, NULL); 
// addpacket(0x7de, 30, NULL); 
// addpacket(0x7df, 54, NULL); 
#endif

#if PACKETVER > 20090701
// addpacket(0x275, 37, NULL); 
// addpacket(0x276, -1, NULL); 
#endif

#if PACKETVER > 20090708
// addpacket(0x7e0, 58, NULL); 
#endif

#if PACKETVER > 20090715
addpacket(0x7e1, 15, NULL); 
#endif

#if PACKETVER > 20090805
addpacket(0x7e2, 8, NULL); 
#endif

#if PACKETVER > 20090818
addpacket(0x7e3, 6, NULL); 
addpacket(0x7e4, -1, "itemlistwindowselected", 2, 4, 8); 
addpacket(0x7e6, 8, NULL); 
#endif

#if PACKETVER > 20090825
// addpacket(0x7e6, 28, NULL); 
addpacket(0x7e7, 5, NULL); 
#endif

#if PACKETVER > 20090922
addpacket(0x7e5, 8, NULL); 
addpacket(0x7e6, 8, NULL); 
addpacket(0x7e7, 32, NULL); 
addpacket(0x7e8, -1, NULL); 
addpacket(0x7e9, 5, NULL); 
#endif

#if PACKETVER > 20090929
// addpacket(0x7ea, 2, NULL); 
// addpacket(0x7eb, -1, NULL); 
// addpacket(0x7ec, 6, NULL); 
// addpacket(0x7ed, 8, NULL); 
// addpacket(0x7ee, 6, NULL); 
// addpacket(0x7ef, 8, NULL); 
// addpacket(0x7f0, 4, NULL); 
// addpacket(0x7f2, 4, NULL); 
// addpacket(0x7f3, 3, NULL); 
#endif

#if PACKETVER > 20091006
// addpacket(0x7ec, 8, NULL); 
// addpacket(0x7ed, 10, NULL); 
// addpacket(0x7f0, 8, NULL); 
// addpacket(0x7f1, 15, NULL); 
// addpacket(0x7f2, 6, NULL); 
// addpacket(0x7f3, 4, NULL); 
// addpacket(0x7f4, 3, NULL); 
#endif

#if PACKETVER > 20091027
addpacket(0x7f5, 6, "gmreqaccname", 2); 
addpacket(0x7f6, 14, NULL); 
#endif

#if PACKETVER > 20091103
addpacket(0x7f7, -1, NULL); 
addpacket(0x7f8, -1, NULL); 
addpacket(0x7f9, -1, NULL); 
#endif

#if PACKETVER > 20091117
addpacket(0x7fa, 8, NULL); 
#endif

#if PACKETVER > 20091124
addpacket(0x7fb, 25, NULL); 
#endif

#if PACKETVER > 20091201
// addpacket(0x7fc, 10, NULL); 
// addpacket(0x7fd, -1, NULL); 
addpacket(0x7fe, 26, NULL); 
// addpacket(0x7ff, -1, NULL); 
#endif

#if PACKETVER > 20091215
addpacket(0x800, -1, NULL); 
// addpacket(0x801, -1, NULL); 
#endif

#if PACKETVER > 20091222
addpacket(0x802, 18, "bookingregreq", 2, 4, 6		); // Booking System
addpacket(0x803, 4, NULL); 
addpacket(0x804, 8, NULL); // Booking System
addpacket(0x805, -1, NULL); 
addpacket(0x806, 4, "bookingdelreq", 2		); // Booking System
// addpacket(0x807, 2, NULL); 
addpacket(0x808, 4, NULL); // Booking System
// addpacket(0x809, 14, NULL); 
// addpacket(0x80a, 50, NULL); 
// addpacket(0x80b, 18, NULL); 
// addpacket(0x80c, 6, NULL); 
#endif

#if PACKETVER > 20091229
addpacket(0x804, 14, "bookingsearchreq", 2, 4, 6, 8, 12		); // Booking System
addpacket(0x806, 2, "bookingdelreq", 0		); // Booking System
addpacket(0x807, 4, NULL); 
addpacket(0x808, 14, "bookingupdatereq", 2		); // Booking System
addpacket(0x809, 50, NULL); 
addpacket(0x80a, 18, NULL); 
addpacket(0x80b, 6, NULL); // Booking System
#endif

#if PACKETVER > 20100105
addpacket(0x801, -1, "purchasereq2", 2, 4, 8, 12); 
#endif

#if PACKETVER > 20100126
// addpacket(0x80c, 2, NULL); 
// addpacket(0x80d, 3, NULL); 
addpacket(0x80e, 14, NULL); 
#endif

#if PACKETVER > 20100209
// addpacket(0x7f0, 6, NULL); 
#endif

#if PACKETVER > 20100223
addpacket(0x80f, 20, NULL); 
#endif

#if PACKETVER > 20100303
addpacket(0x810, 3, NULL); 
addpacket(0x811, -1, "reqopenbuyingstore", 2, 4, 8, 9, 89); 
// addpacket(0x812, 86, NULL); 
// addpacket(0x813, 6, NULL); 
// addpacket(0x814, 6, NULL); 
// addpacket(0x815, -1, NULL); 
// addpacket(0x817, -1, NULL); 
// addpacket(0x818, 6, NULL); 
// addpacket(0x819, 4, NULL); 
#endif

#if PACKETVER > 20100309
addpacket(0x813, -1, NULL); 
// addpacket(0x814, 2, NULL); 
// addpacket(0x815, 6, NULL); 
addpacket(0x816, 6, NULL); 
addpacket(0x818, -1, NULL); 
// addpacket(0x819, 10, NULL); 
// addpacket(0x81a, 4, NULL); 
// addpacket(0x81b, 4, NULL); 
// addpacket(0x81c, 6, NULL); 
addpacket(0x81d, 22, NULL); 
addpacket(0x81e, 8, NULL); 
#endif

#if PACKETVER > 20100323
// addpacket(0x81f, -1, NULL); 
#endif

#if PACKETVER > 20100406
// addpacket(0x81a, 6, NULL); 
#endif

#if PACKETVER > 20100413
// addpacket(0x81a, 10, NULL); 
addpacket(0x820, 11, NULL); 
// addpacket(0x821, 2, NULL); 
// addpacket(0x822, 9, NULL); 
// addpacket(0x823, -1, NULL); 
#endif

#if PACKETVER > 20100414
// addpacket(0x81b, 8, NULL); 
#endif

#if PACKETVER > 20100420
addpacket(0x812, 8, NULL); 
addpacket(0x814, 86, NULL); 
addpacket(0x815, 2, "reqclosebuyingstore", 0); 
addpacket(0x817, 6, "reqclickbuyingstore", 2); 
addpacket(0x819, -1, "reqtradebuyingstore", 2, 4, 8, 12); 
addpacket(0x81a, 4, NULL); 
addpacket(0x81b, 10, NULL); 
addpacket(0x81c, 10, NULL); 
addpacket(0x824, 6, NULL); 
#endif

#if PACKETVER > 20100601
// addpacket(0x825, -1, NULL); 
// addpacket(0x826, 4, NULL); 
addpacket(0x835, -1, "searchstoreinfo", 2, 4, 5, 9, 13, 14, 15); 
addpacket(0x836, -1, NULL); 
addpacket(0x837, 3, NULL); 
// addpacket(0x838, 3, NULL); 
#endif

#if PACKETVER > 20100608
addpacket(0x838, 2, "searchstoreinfonextpage", 0); 
addpacket(0x83a, 4, NULL); // Search Stalls Feature
addpacket(0x83b, 2, "closesearchstoreinfo", 0); 
addpacket(0x83c, 12, "searchstoreinfolistitemclick", 2, 6, 10); 
addpacket(0x83d, 6, NULL); 
#endif

#if PACKETVER > 20100615
// addpacket(0x83e, 26, NULL); 
#endif

#if PACKETVER > 20100622
// addpacket(0x83f, 22, NULL); 
#endif

#if PACKETVER > 20100629
addpacket(0xaa, 9, NULL); 
// addpacket(0x7f1, 18, NULL); 
// addpacket(0x7f2, 8, NULL); 
// addpacket(0x7f3, 6, NULL); 
#endif

#if PACKETVER > 20100701
addpacket(0x83a, 5, NULL); // Search Stalls Feature
#endif

#if PACKETVER > 20100713
// addpacket(0x827, 6, NULL); 
// addpacket(0x828, 14, NULL); 
// addpacket(0x829, 6, NULL); 
// addpacket(0x82a, 10, NULL); 
// addpacket(0x82b, 6, NULL); 
// addpacket(0x82c, 14, NULL); 
// addpacket(0x840, -1, NULL); 
// addpacket(0x841, 19, NULL); 
#endif

#if PACKETVER > 20100714
// addpacket(0x841, 4, NULL); 
#endif

#if PACKETVER > 20100803
addpacket(0x839, 66, NULL); 
addpacket(0x842, 6, "recall2", 2); 
addpacket(0x843, 6, "remove2", 2); 
#endif

#if PACKETVER > 20101124
// packet_ver: 26
addpacket(0x288, -1, "cashshopbuy", 4, 8); 
addpacket(0x436, 19, "wanttoconnection", 2, 6, 10, 14, 18); 
addpacket(0x35f, 5, "walktoxy", 2); 
addpacket(0x360, 6, "ticksend", 2); 
addpacket(0x361, 5, "changedir", 2, 4); 
addpacket(0x362, 6, "takeitem", 2); 
addpacket(0x363, 6, "dropitem", 2, 4); 
addpacket(0x364, 8, "movetokafra", 2, 4); 
addpacket(0x365, 8, "movefromkafra", 2, 4); 
addpacket(0x366, 10, "useskilltopos", 2, 4, 6, 8); 
addpacket(0x367, 90, "useskilltoposinfo", 2, 4, 6, 8, 10); 
addpacket(0x368, 6, "getcharnamerequest", 2); 
addpacket(0x369, 6, "solvecharname", 2); 
addpacket(0x856, -1, NULL); 
addpacket(0x857, -1, NULL); 
addpacket(0x858, -1, NULL); 
addpacket(0x859, -1, NULL); 
#endif

#if PACKETVER > 20111005
// packet_ver: 27
addpacket(0x364, 5, "walktoxy", 2); 
addpacket(0x817, 6, "ticksend", 2); 
addpacket(0x366, 5, "changedir", 2, 4); 
addpacket(0x815, 6, "takeitem", 2); 
addpacket(0x885, 6, "dropitem", 2, 4); 
addpacket(0x893, 8, "movetokafra", 2, 4); 
addpacket(0x897, 8, "movefromkafra", 2, 4); 
addpacket(0x369, 10, "useskilltopos", 2, 4, 6, 8); 
addpacket(0x8ad, 90, "useskilltoposinfo", 2, 4, 6, 8, 10); 
addpacket(0x88a, 6, "getcharnamerequest", 2); 
addpacket(0x838, 6, "solvecharname", 2); 
addpacket(0x439, 8, "useitem", 2, 4); 
#endif

#if PACKETVER > 20111102
// packet_ver: 28
addpacket(0x436, 26, "friendslistadd", 2); 
addpacket(0x898, 5, "hommenu", 4); 
addpacket(0x281, 36, "storagepassword", 0); 
addpacket(0x88d, 26, "partyinvite2", 2); 
addpacket(0x83c, 19, "wanttoconnection", 2, 6, 10, 14, 18); 
addpacket(0x8aa, 7, "actionrequest", 2, 6); 
addpacket(0x2c4, 10, "useskilltoid", 2, 4, 6); 
addpacket(0x811, -1, "itemlistwindowselected", 2, 4, 8); 
addpacket(0x890, 8, NULL); 
addpacket(0x8a5, 18, "bookingregreq", 2, 4, 6); 
addpacket(0x835, -1, "reqopenbuyingstore", 2, 4, 8, 9, 89); 
addpacket(0x89b, 2, "reqclosebuyingstore", 0); 
addpacket(0x8a1, 6, "reqclickbuyingstore", 2); 
addpacket(0x89e, -1, "reqtradebuyingstore", 2, 4, 8, 12); 
addpacket(0x8ab, -1, "searchstoreinfo", 2, 4, 5, 9, 13, 14, 15); 
addpacket(0x88b, 2, "searchstoreinfonextpage", 0); 
addpacket(0x8a2, 12, "searchstoreinfolistitemclick", 2, 6, 10); 
#endif

#if PACKETVER > 20120307
addpacket(0x86a, 19, "wanttoconnection", 2, 6, 10, 14, 18); 
addpacket(0x437, 5, "walktoxy", 2); 
addpacket(0x887, 6, "ticksend", 2); 
addpacket(0x890, 5, "changedir", 2, 4); 
addpacket(0x865, 6, "takeitem", 2); 
addpacket(0x2c4, 6, "dropitem", 2, 4); 
addpacket(0x93b, 8, "movetokafra", 2, 4); 
addpacket(0x963, 8, "movefromkafra", 2, 4); 
addpacket(0x438, 10, "useskilltopos", 2, 4, 6, 8); 
addpacket(0x366, 90, "useskilltoposinfo", 2, 4, 6, 8, 10); 
addpacket(0x96a, 6, "getcharnamerequest", 2); 
addpacket(0x368, 6, "solvecharname", 2); 
addpacket(0x369, 26, "friendslistadd", 2); 
addpacket(0x863, 5, "hommenu", 4); 
addpacket(0x861, 36, "storagepassword", 0); 
addpacket(0x929, 26, "partyinvite2", 2); 
addpacket(0x885, 7, "actionrequest", 2, 6); 
addpacket(0x889, 10, "useskilltoid", 2, 4, 6); 
addpacket(0x870, -1, "itemlistwindowselected", 2, 4, 8); 
addpacket(0x926, 18, "bookingregreq", 2, 4, 6); 
addpacket(0x815, -1, "reqopenbuyingstore", 2, 4, 8, 9, 89); 
addpacket(0x817, 2, "reqclosebuyingstore", 0); 
addpacket(0x360, 6, "reqclickbuyingstore", 2); 
addpacket(0x811, -1, "reqtradebuyingstore", 2, 4, 8, 12); 
addpacket(0x884, -1, "searchstoreinfo", 2, 4, 5, 9, 13, 14, 15); 
addpacket(0x835, 2, "searchstoreinfonextpage", 0); 
addpacket(0x838, 12, "searchstoreinfolistitemclick", 2, 6, 10); 
addpacket(0x439, 8, "useitem", 2, 4); 
// Add new packets here
// packet_ver: 29
#endif

// Deixe isto sempre por ultimo
#ifdef BRO_CLIENT
addpacket(0x0930,19,"wanttoconnection",2,6,10,14,18); 
addpacket(0x0202,8,"movetokafra",2,4); 
addpacket(0x0232,9,"hommoveto",2,6); 
addpacket(0x089A,5,"walktoxy",2); 
addpacket(0x091A,10,"useskilltopos",2,4,6,8); 
addpacket(0x0926,10,"useskilltoid",2,4,6,8); 
addpacket(0x088C,7,"actionrequest",2,6); 
addpacket(0x085E,6,"getcharnamerequest",2); 
addpacket(0x0961,8,"movefromkafra",2,4); 
addpacket(0x0952,6,"dropitem",2,4); 
addpacket(0x094B,5,"changedir",2,4); 
addpacket(0x093D,5,"hommenu",4); 
addpacket(0x0869,6,"takeitem",2); 
0x0801,-1,reqtradebuyingstore,2,4,8,12
addpacket(0x0923,6,"ticksend",2); 
addpacket(0x095F,26,"partyinvite2",2); 
0x008c,-1,globalmessage,2,4
addpacket(0x00f7,2,"closekafra",0); 
addpacket(0x00a7,8,"useitem",2,6); 
addpacket(0x087f,36,"storagepassword",2,4,20); 
addpacket(0x0288,6,"cashshopbuy",2,4); 
addpacket(0x190,90,"useskilltoposinfo",2,4,6,8,10); 
addpacket(0x193,6,"solvecharname",2); 
addpacket(0x969,26,NULL);
addpacket(0x876,4,NULL);
addpacket(0x8cd,10,NULL);
addpacket(0x8b,23,NULL);
addpacket(0x23d,6,NULL);
addpacket(0x24e,6,"auctioncancel",2); 
addpacket(0x275,37,NULL);
0x276,-1
addpacket(0x289,8,NULL);
addpacket(0x445,6,NULL);
addpacket(0x2e2,8,NULL);
addpacket(0x2e3,10,NULL);
addpacket(0x2e4,6,NULL);
addpacket(0x2e5,5,NULL);
addpacket(0x3dd,18,NULL);
addpacket(0x3de,18,NULL);
addpacket(0x447,2,NULL);
addpacket(0x7db,8,NULL);
addpacket(0x7dc,6,NULL);
addpacket(0x7dd,54,NULL);
addpacket(0x7de,30,NULL);
addpacket(0x7df,54,NULL);
addpacket(0x7e0,58,NULL);
0x967,-1
addpacket(0x7e5,4,NULL);
addpacket(0x7ea,2,NULL);
0x7eb,-1
addpacket(0x897,8,NULL);
addpacket(0x7ed,10,NULL);
addpacket(0x7ee,6,NULL);
addpacket(0x7ef,8,NULL);
addpacket(0x7f0,6,NULL);
addpacket(0x7f1,18,NULL);
addpacket(0x7f2,8,NULL);
addpacket(0x7f3,6,NULL);
addpacket(0x7f4,3,NULL);
addpacket(0x7fc,10,NULL);
0x7fd,-1
0x7ff,-1
0x800,-1
addpacket(0x8ab,18,NULL);
addpacket(0x80c,2,NULL);
addpacket(0x80d,3,NULL);
0x363,-1
addpacket(0x22d,2,NULL);
addpacket(0x92c,6,NULL);
0x87b,-1
0x81f,-1
addpacket(0x821,2,NULL);
addpacket(0x822,9,NULL);
0x823,-1
0x825,-1
addpacket(0x826,4,NULL);
0x8ad,-1
addpacket(0x885,2,NULL);
addpacket(0x91c,12,NULL);
addpacket(0x83e,26,NULL);
0x840,-1
addpacket(0x841,4,NULL);
addpacket(0x827,6,NULL);
addpacket(0x828,14,NULL);
addpacket(0x829,12,NULL);
addpacket(0x82a,10,NULL);
addpacket(0x82b,6,NULL);
addpacket(0x82c,10,NULL);
addpacket(0x844,2,NULL);
addpacket(0x845,6,NULL);
addpacket(0x846,4,NULL);
0x847,-1
0x848,-1
addpacket(0x849,12,NULL);
addpacket(0x84a,2,NULL);
addpacket(0x84b,19,NULL);
addpacket(0x84c,10,NULL);
addpacket(0x84d,10,NULL);
addpacket(0x84e,5,NULL);
addpacket(0x84f,6,NULL);
addpacket(0x850,7,NULL);
addpacket(0x855,6,NULL);
0x851,-1
addpacket(0x852,2,NULL);
0x853,-1
0x854,-1
addpacket(0x361,6,NULL);
addpacket(0x878,2,NULL);
addpacket(0x8a0,2,NULL);
addpacket(0x927,2,NULL);
addpacket(0x94c,2,NULL);
addpacket(0x922,2,NULL);
addpacket(0x95a,2,NULL);
addpacket(0x883,2,NULL);
addpacket(0x894,2,NULL);
addpacket(0x91b,2,NULL);
addpacket(0x89c,2,NULL);
addpacket(0x94a,2,NULL);
addpacket(0x7e4,2,NULL);
addpacket(0x964,2,NULL);
addpacket(0x941,2,NULL);
addpacket(0x919,2,NULL);
addpacket(0x87c,2,NULL);
addpacket(0x932,2,NULL);
addpacket(0x951,2,NULL);
addpacket(0x948,2,NULL);
addpacket(0x91d,2,NULL);
addpacket(0x921,2,NULL);
addpacket(0x2c4,2,NULL);
addpacket(0x367,2,NULL);
addpacket(0x939,2,NULL);
addpacket(0x85b,2,NULL);
addpacket(0x924,2,NULL);
addpacket(0x91e,2,NULL);
addpacket(0x91f,2,NULL);
addpacket(0x93b,2,NULL);
addpacket(0x8a8,2,NULL);
addpacket(0x360,2,NULL);
addpacket(0x89e,2,NULL);
addpacket(0x899,2,NULL);
addpacket(0x920,2,NULL);
addpacket(0x437,2,NULL);
addpacket(0x8a3,2,NULL);
addpacket(0x862,2,NULL);
addpacket(0x94f,2,NULL);
addpacket(0x861,2,NULL);
addpacket(0x958,2,NULL);
addpacket(0x962,2,NULL);
addpacket(0x960,2,NULL);
addpacket(0x8ac,2,NULL);
addpacket(0x364,2,NULL);
addpacket(0x8a5,2,NULL);
addpacket(0x880,2,NULL);
addpacket(0x875,2,NULL);
addpacket(0x864,2,NULL);
addpacket(0x95e,2,NULL);
addpacket(0x369,2,NULL);
addpacket(0x966,2,NULL);
addpacket(0x87d,2,NULL);
addpacket(0x931,2,NULL);
addpacket(0x946,2,NULL);
addpacket(0x93c,2,NULL);
addpacket(0x917,2,NULL);
addpacket(0x88d,2,NULL);
addpacket(0x35f,2,NULL);
addpacket(0x881,2,NULL);
addpacket(0x92f,2,NULL);
addpacket(0x85c,2,NULL);
addpacket(0x934,2,NULL);
addpacket(0x925,2,NULL);
addpacket(0x95c,2,NULL);
addpacket(0x96a,2,NULL);
addpacket(0x959,2,NULL);
addpacket(0x86e,2,NULL);
addpacket(0x281,2,NULL);
addpacket(0x87e,2,NULL);
addpacket(0x94e,2,NULL);
addpacket(0x88a,2,NULL);
addpacket(0x872,2,NULL);
addpacket(0x86a,2,NULL);
addpacket(0x942,2,NULL);
addpacket(0x935,2,NULL);
addpacket(0x873,2,NULL);
addpacket(0x945,2,NULL);
addpacket(0x86b,2,NULL);
addpacket(0x947,2,NULL);
addpacket(0x817,2,NULL);
addpacket(0x877,2,NULL);
addpacket(0x802,2,NULL);
addpacket(0x895,2,NULL);
addpacket(0x93e,2,NULL);
0x8b1,-1
0x82d,-1
0x8b2,-1
addpacket(0x8af,10,NULL);
addpacket(0x8b0,17,NULL);
0x8b3,-1
addpacket(0x8b4,2,NULL);
addpacket(0x8b5,6,NULL);
addpacket(0x8b6,3,NULL);
addpacket(0x2f4,3,NULL);
addpacket(0x2f5,7,NULL);
addpacket(0x2f6,7,NULL);
addpacket(0x8b8,10,NULL);
addpacket(0x8b9,12,NULL);
addpacket(0x8ba,10,NULL);
addpacket(0x8bb,8,NULL);
addpacket(0x8bc,10,NULL);
addpacket(0x8bd,8,NULL);
addpacket(0x8be,14,NULL);
addpacket(0x8bf,8,NULL);
addpacket(0x8c3,10,NULL);
addpacket(0x8c4,8,NULL);
addpacket(0x8c5,6,NULL);
addpacket(0x8c6,4,NULL);
0x8c0,-1
addpacket(0x8c1,2,NULL);
addpacket(0x8c2,2,NULL);
addpacket(0x8ce,2,NULL);
addpacket(0x8cf,10,NULL);
addpacket(0x8d0,9,NULL);
addpacket(0x8d1,7,NULL);
addpacket(0x8d3,10,NULL);
addpacket(0x8d4,8,NULL);
0x8d5,-1
addpacket(0x8d6,6,NULL);
addpacket(0x8d7,28,NULL);
addpacket(0x8d8,27,NULL);
addpacket(0x8d9,30,NULL);
addpacket(0x8da,26,NULL);
addpacket(0x8db,27,NULL);
addpacket(0x8dc,26,NULL);
addpacket(0x8dd,27,NULL);
addpacket(0x8de,27,NULL);
addpacket(0x8df,50,NULL);
addpacket(0x8e0,51,NULL);
addpacket(0x8e1,51,NULL);
addpacket(0x8e2,25,NULL);
addpacket(0x8e3,118,NULL);
addpacket(0x8e4,6,NULL);
addpacket(0x8e5,41,NULL);
addpacket(0x8e6,4,NULL);
addpacket(0x8e7,10,NULL);
0x8e8,-1
addpacket(0x8e9,2,NULL);
addpacket(0x8ea,4,NULL);
addpacket(0x8eb,39,NULL);
addpacket(0x8ec,73,NULL);
addpacket(0x8ed,43,NULL);
addpacket(0x8ee,6,NULL);
addpacket(0x8ef,6,NULL);
addpacket(0x8f0,6,NULL);
addpacket(0x8f1,6,NULL);
addpacket(0x8f2,36,NULL);
0x8f3,-1
addpacket(0x8f4,6,NULL);
0x8f5,-1
addpacket(0x8f6,22,NULL);
addpacket(0x8f7,3,NULL);
addpacket(0x8f8,7,NULL);
addpacket(0x8f9,6,NULL);
addpacket(0x8fa,6,NULL);
addpacket(0x8fb,6,NULL);
addpacket(0x909,6,NULL);
addpacket(0x90b,30,NULL);
addpacket(0x90c,30,NULL);
addpacket(0x8fc,30,NULL);
addpacket(0x8fd,6,NULL);
0x8fe,-1
addpacket(0x8ff,24,NULL);
0x900,-1
0x901,-1
0x902,-1
0x903,-1
0x904,-1
0x905,-1
0x906,-1
addpacket(0x907,5,NULL);
addpacket(0x908,5,NULL);
addpacket(0x90a,26,NULL);
0x90d,-1
addpacket(0x90e,2,NULL);
addpacket(0x896,2,NULL);
addpacket(0x92d,2,NULL);
addpacket(0x870,2,NULL);
addpacket(0x871,2,NULL);
addpacket(0x368,2,NULL);
addpacket(0x89d,2,NULL);
addpacket(0x8a7,2,NULL);
addpacket(0x86d,2,NULL);
addpacket(0x866,2,NULL);
addpacket(0x954,2,NULL);
addpacket(0x436,2,NULL);
addpacket(0x93a,2,NULL);
addpacket(0x867,2,NULL);
addpacket(0x936,2,NULL);
addpacket(0x92b,2,NULL);
addpacket(0x968,2,NULL);
addpacket(0x884,2,NULL);
addpacket(0x929,2,NULL);
addpacket(0x362,2,NULL);
addpacket(0x893,2,NULL);
addpacket(0x87a,2,NULL);
addpacket(0x8a2,2,NULL);
addpacket(0x940,2,NULL);
addpacket(0x965,2,NULL);
addpacket(0x944,2,NULL);
addpacket(0x88e,2,NULL);
addpacket(0x88f,2,NULL);
addpacket(0x8a6,2,NULL);
addpacket(0x957,2,NULL);
addpacket(0x949,2,NULL);
addpacket(0x85d,2,NULL);
addpacket(0x963,2,NULL);
addpacket(0x86c,2,NULL);
addpacket(0x882,2,NULL);
addpacket(0x933,2,NULL);
addpacket(0x95b,2,NULL);
addpacket(0x892,2,NULL);
addpacket(0x23b,2,NULL);
addpacket(0x89b,2,NULL);
addpacket(0x955,2,NULL);
addpacket(0x886,2,NULL);
addpacket(0x8aa,2,NULL);
addpacket(0x819,2,NULL);
addpacket(0x438,2,NULL);
addpacket(0x874,2,NULL);
addpacket(0x879,2,NULL);
addpacket(0x85f,2,NULL);
addpacket(0x938,2,NULL);
addpacket(0x8a9,2,NULL);
addpacket(0x890,2,NULL);
addpacket(0x7ec,2,NULL);
addpacket(0x94d,2,NULL);
addpacket(0x918,2,NULL);
addpacket(0x88b,2,NULL);
addpacket(0x92a,2,NULL);
addpacket(0x868,2,NULL);
addpacket(0x891,2,NULL);
addpacket(0x89f,2,NULL);
addpacket(0x860,2,NULL);
addpacket(0x8a4,2,NULL);
addpacket(0x950,2,NULL);
addpacket(0x887,2,NULL);
addpacket(0x956,2,NULL);
addpacket(0x889,2,NULL);
addpacket(0x928,2,NULL);
addpacket(0x937,2,NULL);
addpacket(0x95d,2,NULL);
addpacket(0x811,2,NULL);
addpacket(0x898,2,NULL);
addpacket(0x85a,2,NULL);
addpacket(0x888,2,NULL);
addpacket(0x943,2,NULL);
addpacket(0x865,2,NULL);
addpacket(0x92e,2,NULL);
addpacket(0x835,2,NULL);
addpacket(0x863,2,NULL);
addpacket(0x953,2,NULL);
addpacket(0x86f,2,NULL);
addpacket(0x365,2,NULL);
addpacket(0x83c,2,NULL);
addpacket(0x93f,2,NULL);
addpacket(0x8a1,2,NULL);
#endif
