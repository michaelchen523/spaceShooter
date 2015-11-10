/*
 * Exported with nin10kit v1.1
 * Invocation command was nin10kit -mode4 images galagaShip.jpg enemyShip.jpg explosion1.jpg explosion2.jpg explosion3.jpg explosion4.jpg 
 * Time-stamp: Monday 11/09/2015, 16:58:17
 * 
 * Image Information
 * -----------------
 * galagaShip.jpg 40@40
 * enemyShip.jpg 30@30
 * explosion1.jpg 30@34
 * explosion2.jpg 32@33
 * explosion3.jpg 34@32
 * explosion4.jpg 36@36
 * 
 * Quote/Fortune of the Day!
 * -------------------------
 * 
 * All bug reports / feature requests are to be sent to Brandon (bwhitehead0308@gmail.com)
 */

#include "images.h"

const unsigned short images_palette[255] =
{
	0x0000,0x0400,0x0800,0x0001,0x0c00,0x0401,0x1400,0x0002,
	0x0802,0x0003,0x0c02,0x2400,0x0403,0x0020,0x0803,0x1003,
	0x0005,0x1404,0x0c05,0x2403,0x3c01,0x2004,0x0040,0x0007,
	0x0c06,0x0041,0x0025,0x3c20,0x0042,0x0009,0x3c04,0x4803,
	0x0409,0x3405,0x2424,0x2041,0x080a,0x0c43,0x0860,0x000b,
	0x1443,0x3c23,0x0029,0x1061,0x3841,0x0862,0x040d,0x0846,
	0x1062,0x1462,0x4c24,0x000e,0x0864,0x4c42,0x200d,0x0c48,
	0x4c27,0x180f,0x300d,0x0484,0x0ca0,0x0012,0x002f,0x1084,
	0x0013,0x0069,0x3465,0x1412,0x0430,0x5446,0x0431,0x0832,
	0x10a4,0x3485,0x0418,0x0c18,0x001a,0x54a3,0x1819,0x041b,
	0x0c55,0x001d,0x0856,0x1439,0x18c8,0x003b,0x1057,0x0858,
	0x1457,0x043c,0x1091,0x083c,0x0459,0x0c3c,0x103c,0x24ca,
	0x64a8,0x54c6,0x085a,0x0477,0x1476,0x105a,0x0c77,0x005c,
	0x0079,0x1494,0x0c95,0x0496,0x1095,0x4104,0x1908,0x38e9,
	0x2907,0x3923,0x107b,0x10ee,0x1cb4,0x1499,0x24d3,0x250f,
	0x209e,0x254a,0x18bc,0x1918,0x1519,0x4188,0x4988,0x2536,
	0x191c,0x251b,0x2155,0x211c,0x2539,0x31ad,0x35ae,0x25b2,
	0x1d97,0x3179,0x1998,0x1599,0x2198,0x395d,0x15b6,0x3597,
	0x2db5,0x2dd2,0x317e,0x1dba,0x15d9,0x21d9,0x1dda,0x29d9,
	0x620e,0x21db,0x29f7,0x1df9,0x35f8,0x4630,0x3ddb,0x25fa,
	0x31f9,0x39de,0x3218,0x261a,0x3e35,0x4235,0x4219,0x5651,
	0x3a37,0x323b,0x6271,0x325a,0x2a5b,0x2e5b,0x7672,0x325c,
	0x463e,0x2e5d,0x425c,0x2e7b,0x4a79,0x5695,0x467a,0x72b1,
	0x3e7d,0x4699,0x5ab4,0x3e9a,0x4a7d,0x527d,0x3e9c,0x3a9d,
	0x4eb8,0x52d5,0x56b9,0x32be,0x3ebd,0x76f3,0x7ad7,0x6ef5,
	0x5abe,0x52dc,0x42de,0x4edd,0x5afa,0x3afd,0x62de,0x4afd,
	0x42fe,0x571c,0x5b1d,0x571e,0x631d,0x671d,0x6b3a,0x633b,
	0x6f3a,0x5f3c,0x6b3b,0x4f3e,0x6359,0x6f58,0x6b59,0x4b5e,
	0x575e,0x7b5b,0x675e,0x6f7b,0x7b7a,0x737b,0x6b99,0x6f99,
	0x5f7e,0x6b7d,0x6f7d,0x677e,0x739a,0x777e,0x6f9c,0x639e,
	0x679e,0x6f9e,0x739e,0x7b9e,0x6fbe,0x77be,0x7bbe,0x7bdb,
	0x7bdc,0x77dd,0x6fde,0x7bdd,0x73de,0x7bde,0x7fde
};

const unsigned short galagaShip[800] =
{
	0xd6e5,0xe6e7,0xdce6,0xdee6,0xe5da,0xe3e5,0xd7e7,0x81d4,0x5e5d,0x725d,0xfce2,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfc,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xeaea,0xe6e7,0xe3e6,0xe3ee,0xeae5,0xe3e5,0xe9ee,0x89d4,0x6565,0x7a5d,0xfde2,0xfdf9,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf6f3,0xe3e3,0xdee3,0xdede,0xd6e3,0xe3ea,0xeeee,0xa6d4,
	0x847f,0x8f84,0xfde2,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xf5e3,0xe5e5,0xe3d6,
	0xe3ec,0xfdfd,0xfdfd,0xf4fd,0xf4f4,0xf3f3,0xfdfd,0xfdf9,0xfdfd,0xfdfd,0xfefe,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfefb,0xd5ed,0xd6e5,0xe3e3,0xfdfd,0xfdfb,0xfdfd,0xfcfd,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefb,0xd5f3,0xd6da,0xe7e7,0xf9f7,0xfdfb,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfbfb,0xedfd,0xeded,0xe3e3,0xf7e7,0xfdf6,0xfdfe,
	0xfdfd,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfd,0xfcfa,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfbfd,0xe3fd,0xdaed,
	0xeede,0xeee6,0xfdf6,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefe,0xfdfd,0xfcfd,0xfdfd,0xfcfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfe,0xfdfd,0xfdfd,0xf1fd,0xdcee,0xdeee,0xe1e5,0xa7e4,0xc57e,0xe1e4,0xeded,0x7fc8,0x7c84,0xbc7b,0xfefd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfef6,0xfdfe,0xfdfd,0xf2f5,0xdcf1,0xe3e3,0xe1f6,0x98d8,0xae6d,0xe1e4,0xeded,0x6ac8,
	0x6b7c,0x9e66,0xfef3,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xbdd5,0xc8bd,0xe2c8,0xe6f1,0xe7e6,0xd8d6,0xaadd,
	0xc598,0xc7c5,0xedf3,0xa6d4,0x9e9e,0xc89e,0xfef6,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf5fd,0x69b0,0x7a64,0xbc6c,
	0xdcd9,0xe7e6,0xe5d6,0xe4e5,0xb7e4,0x7d71,0xfefd,0xf6f6,0xf6f3,0xf6f3,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0x649e,0x7265,0xb075,0xe2e2,0xdde7,0xe5de,0xd8d6,0xb7e1,0x7d71,0xfefe,0xfefe,0xfdfd,0xfefe,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fc,0x65a1,0x625b,0x9259,0xb4b0,0xe3ea,0xe3de,0xd6de,0xd8d8,0xc7c7,0xedf3,0xfef3,
	0xfbfd,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0x5bb0,0x5555,0x6251,0x7656,0xeace,0xe3e5,0xe3d7,
	0xdde5,0xece7,0xf6f6,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0x6cb0,0x8080,0x8392,
	0x898d,0xd5d5,0xd4d5,0xd2d3,0xd9d2,0xdeee,0xf3ea,0xfde5,0xf9fd,0xfdf9,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xf5fd,0xe2f2,0xd4e2,0xd5d5,0xdad8,0x69bd,0x7c7c,0xbc6a,0xe3e2,0xedd6,0xe5d6,0xe5e5,0xe9e3,0xeae2,0xece3,
	0xfdfb,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xe3fd,0xd7e9,0xd6e3,0xe5e5,0x64bd,0x686b,0xb05c,0xe2d4,0xe5e5,0xd6d8,
	0xe5e5,0xead6,0xeae2,0xecec,0xfdfb,0xfdfd,0xfdfd,0xfdfd,0xf9f7,0xfefe,0xe3fd,0xdce9,0xdedc,0xede3,0x9ece,0x7aa1,
	0xa172,0xc8bd,0xddea,0xe5e5,0xd6e5,0xe3e3,0xe3e3,0xece7,0xfdfb,0xfdfd,0xfdfd,0xfdfd,0xece6,0xe5e5,0xd6e5,0xdcdc,
	0xe6e6,0xeae3,0xd5d5,0x83c8,0x6259,0x8266,0xe3d9,0xdde5,0xd7de,0xe3e3,0xd6e3,0xe3d6,0xe3e3,0xe3e3,0xe3e3,0xe3e3,
	0xe5ee,0xe4ed,0xd8e4,0xe3e5,0xe6e6,0xe2e3,0xd4d4,0x83c8,0x5c59,0x8266,0xe3d2,0xdde5,0xdce3,0xead7,0xd6e3,0xe3d6,
	0xe3e3,0xe3e3,0xe3e3,0xe3e3,0xf6f5,0xfef3,0xe1fe,0xd6e1,0xdee3,0xe2dc,0x9ec8,0x7a92,0xa162,0xcbbc,0xdeeb,0xe5d8,
	0xdce6,0xead7,0xe5d8,0xf2e3,0xfdf5,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xecfd,0xe3e5,0xdce3,0xd9e6,0x64b0,0x6575,
	0xb052,0xe0d3,0xe3d7,0xd6d6,0xe3e7,0xe5ea,0xe5e5,0xf2e5,0xfdf6,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf5fd,0xd4f4,0xd5d4,
	0xd4d5,0xd7dc,0x69c8,0x8184,0xbc5a,0xe2eb,0xd6d6,0xe5d6,0xe3e3,0xe3e3,0xe3e5,0xede5,0xfdf5,0xfdfd,0xfdfd,0xfdfd,
	0xfdfa,0x6abc,0x9283,0x8192,0x8f8d,0xe3e2,0xd5d5,0xd4d5,0xdad4,0xd6ea,0xf6e3,0xfdec,0xfefd,0xfbfd,0xfdf9,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfc,0x59b0,0x5155,0x724c,0x7658,0xe5d5,0xe5e5,0xd6d6,0xd8e5,0xe4e4,0xf8f8,0xfdfd,
	0xfdfd,0xfbfb,0xfdf9,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcf9,0x62b0,0x6262,0x925b,0xb4b0,0xe3e5,0xe3de,0xd6de,
	0xc7e4,0xc7c7,0xe5e4,0xfdfd,0xfefe,0xf9f7,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0x62b0,0x7262,0xb072,
	0xe9e2,0xd6e3,0xe3de,0xd6de,0xb7e4,0x7e71,0xfdfe,0xfdfd,0xfefe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xf2fe,0x649e,0x7a50,0xb064,0xe7da,0xe3e3,0xe9d7,0xd6ee,0xb7e4,0x7d71,0xfefe,0xf4fd,0xf5f2,0xfdf2,0xfcfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefe,0xbcd5,0xc8bc,0xedc8,0xecf6,0xdce3,0xeae3,0xb5de,0xc598,0xc7c7,0xeaf6,0xa6d4,
	0xa19e,0xc89e,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefe,0xfcfd,0xfafa,0xf2fc,0xeaed,0xe7e7,0xe5e5,0x7ed8,
	0xc571,0xf3e4,0xfdfb,0x6cc8,0x727a,0x9e50,0xfdf5,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfd,0xfaf9,0xf4f9,
	0xe2e2,0xe6e6,0xe4ec,0x98e4,0xc57d,0xd8e4,0xf4ee,0x7fc9,0x8183,0xbd81,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xe6f9,0xe3e3,0xedda,0xf8e3,0xfdf8,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf6f6,0xfefd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xeef9,0xe3ee,0xe5e5,0xfbe5,0xfdf8,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xe3ee,0xe3e3,0xd6e5,0xfbe5,0xfdf9,0xfdfd,
	0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdf5,0xe3ee,0xe3e3,
	0xe5e5,0xfdfd,0xfdf9,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xf5e3,0xe7e3,0xe3e7,0xeae5,0xfdfd,0xfdfd,0xf2fd,0xf2f2,0xf2f2,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf6f6,0xe3e3,0xdee7,0xdee7,0xd6d6,0xe3e5,0xeaee,0xa6d5,0x847f,0x9e84,0xfde2,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xe3e5,0xe3e3,0xe7e7,0xe3ee,0xe5e3,0xe3e3,0xeaf2,0x89d5,
	0x666c,0x7450,0xfde2,0xfefd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xd6d6,0xded6,0xdee3,0xdee7,
	0xe3d6,0xd6d6,0xdae3,0x89d5,0x6265,0x7a65,0xfde2,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd
};

const unsigned short enemyShip[450] =
{
	0xfdfb,0xfdfd,0xfdfd,0xfdfd,0xfefe,0xfcfd,0xfdfc,0xf3fd,0x66c8,0x5378,0x3118,0x080a,0x030e,0x1616,0x3734,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf3fd,0x66c8,0x2e64,0x2b07,0x2801,0x0303,0x0d0d,0x0903,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfe,0xfbfd,0xfdfd,0xfdfe,0xb6eb,0xb4b6,0x9d9d,0x033f,0x2d1c,0x8516,0xa59d,0xfcfa,0xfdfc,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fc,0xfcfc,0xfdfd,0x0085,0x4848,0xba0d,0xfefd,0xfcfc,0xfdfd,0xfdfd,0xfcfc,
	0xf3fc,0xfefe,0xfbfd,0xfcfa,0xfdfd,0xfbfd,0xfdfd,0x0085,0x2600,0xb500,0xfefe,0xfdf9,0xfdfd,0xfdfd,0xfcfd,0xbde2,
	0xc2ce,0xc1c2,0xc1c1,0xc6c6,0xc7c5,0xb5c7,0x1c79,0xc185,0xf3ba,0xfefd,0xfdfd,0xfdfd,0xfdfd,0xf5fd,0x74b0,0x2474,
	0x030c,0x0601,0x1f14,0x0b14,0x0806,0x0025,0xfd85,0xfefd,0xfefe,0xfdfd,0xfdfd,0xfdfd,0xf5fe,0x69bc,0x2074,0x0f0c,
	0x2942,0x6045,0x4261,0x2823,0x0348,0xf5a5,0xf6fe,0xfdfd,0xf9f9,0xfdfd,0xfdfd,0xfdfd,0xebf4,0xd5e2,0xc6ed,0x381e,
	0x1f45,0x291e,0x0d0a,0x091c,0xa682,0xd5a6,0xfdfd,0xf9f9,0xfdfd,0xfdfd,0xfdfd,0xfafa,0xfdfa,0xe1fe,0x1f45,0x211e,
	0x1115,0x0709,0x101a,0x6927,0xc874,0xf9fd,0xfdfd,0xfefd,0xfdfd,0xfdfd,0xf4f5,0xeefa,0xe1fe,0x3832,0x363a,0x2439,
	0x3e27,0x1d2a,0x7a40,0xbd65,0xf9fc,0xfdfd,0xfefe,0xfdfd,0xfdfd,0x3bb5,0x796e,0x6f70,0x210b,0x5843,0x5256,0x6b6a,
	0x1d3e,0x7840,0xbd4b,0xf7fa,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0x009d,0x0000,0x0019,0x2408,0x594a,0x6262,0x6a75,0x1d3e,
	0x7a40,0xc864,0xf9fc,0xdde7,0xd8e5,0xe3e3,0xdede,0x039d,0x3454,0x1a1a,0x3373,0x514c,0x5959,0x5046,0x172a,0x6933,
	0xa674,0xe6d7,0x000d,0x0703,0x0307,0x0000,0x0101,0x0c08,0x4420,0x5563,0x5155,0x404f,0x1027,0x0307,0x1009,0x0307,
	0x0000,0x0d0d,0x0703,0x0707,0x0000,0x2800,0x0e08,0x3d1d,0x6868,0x5567,0x4059,0x101d,0x030c,0x1010,0x071a,0x0000,
	0xdcdc,0xcccc,0xcccc,0xd6d6,0x1c86,0x073f,0x4110,0x3e3e,0x6755,0x4c55,0x5056,0x102a,0x7533,0x9e47,0xdcd2,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0x009d,0x003f,0x0707,0x1d0e,0x5555,0x5d5b,0x6465,0x172a,0x7840,0xbc72,0xfafc,0xf9fc,0xfdfd,
	0xfdfd,0xfdfd,0x009d,0x0830,0x0604,0x1113,0x4b43,0x5353,0x6458,0x1741,0x7a3d,0xbd64,0xfafa,0xf9f9,0xfbfb,0xfbfb,
	0xfdfd,0xfcee,0xd8e3,0xc6f3,0x381e,0x3936,0x4339,0x2443,0x102a,0x833e,0xc86c,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfcfa,0xfef4,0xf3f3,0x4535,0x1521,0x1811,0x1017,0x071a,0x7b2a,0xbd5a,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfd,0xfafa,
	0xf3f4,0xc6f3,0x3529,0x1435,0x1529,0x100e,0x031c,0x9c73,0xce8f,0xf3f6,0xfdfe,0xfdfd,0xfdfd,0xfafc,0x73cf,0x7790,
	0x6f5f,0x2c49,0x4d61,0x4961,0x3428,0x1c3b,0xf491,0xfee2,0xfdfe,0xfefe,0xfdfd,0xfdfd,0xfafc,0x73bb,0x1773,0x0e09,
	0x0b04,0x1b1b,0x2342,0x0702,0x001c,0xfd91,0xfdfd,0xf3f3,0xfefe,0xfdfd,0xfcfd,0xfcfc,0xcbc9,0xb6bc,0xa5b4,0xa79d,
	0xaeae,0xaaae,0xb5a7,0x036e,0xde85,0xf6dd,0xfdfd,0xfefe,0xfdfd,0xfcfd,0xfcfc,0xf6fd,0xfdf6,0xfcfd,0xfdfa,0xf3fe,
	0xfdfe,0xfdfd,0x0386,0x2b00,0xba2b,0xfdfe,0xfdfd,0xf9fd,0xfcfc,0xfdfd,0xf3fe,0xfef3,0xfdfd,0xfcfc,0xf3fd,0xfefe,
	0xfdfd,0x0386,0x313f,0xba02,0xfdfd,0xfdfd,0xf9fd,0xf9fc,0xfdfd,0xfefd,0xfefe,0xfdfd,0xfcf9,0xbde2,0xc2ce,0xbac1,
	0x0c54,0x3128,0x9d2b,0xbab5,0xfdfd,0xf9f9,0xfdf9,0xfdfd,0xfefd,0xfdfe,0xfdfd,0xfdfd,0x74c8,0x2074,0x1c03,0x0c07,
	0x0d01,0x0d0d,0x0d0d,0xf9fd,0xf9f9,0xfdf9,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0x6ac8,0x5a81,0x3f2f,0x0c07,0x0025,
	0x2626,0x3c3c
};

const unsigned short explosion1[510] =
{
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfafc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xd9e8,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xf4fd,0xd9b9,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xc9f4,
	0xf4a8,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfd,0xfdfd,0xfcf4,0xa2eb,0xfcb9,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xd9fd,0xfceb,0xfafa,0xb8cf,0xfcd3,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fd,0xebfc,0xefc0,0xe8fa,0xbfab,0xf4e0,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fd,0xe0f4,0xdbbb,0xd0e8,0xd0cd,0xfdeb,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfc,0xbbe8,0xcabb,0xcdd0,0xdfdf,0xfdeb,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfafc,0xdbef,0xd0d0,0xc3df,0xdfcd,0xf4e8,0xfdf4,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf0fc,0xdfdb,0xdfdf,0xacdf,0xbf9b,0xe2cf,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xf5fd,0xcffc,0xc4ca,0xb3b3,0x96b1,0x9f9b,0xf0d0,0xfdfa,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xf5fd,0xe2ea,0xcad3,0xb1d0,0x9696,0x9993,0x9b99,0xe0d0,0xf4eb,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xfdfd,0xfdfd,
	0xf1f4,0xcfeb,0xb1c4,0x99a3,0x9999,0xac96,0xcad0,0xb9bb,0xd9c9,0xfdf2,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xe8fa,0xc4db,0x8ba3,0x9999,0xc3a3,0xabc4,0xd1bb,0xcccc,0xfdf1,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfafc,
	0xc4e0,0xb1bf,0x9696,0xd0b1,0xe0db,0xfae8,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fd,0xcfd3,
	0xd0db,0xb1b1,0xcad0,0xfadb,0xfcfa,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xe0f4,0xcfc4,
	0xcae0,0xcfca,0xf0e8,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fd,0xd1e8,0xe8d3,0xd3fa,
	0xd3bb,0xf4f4,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf1f1,0xf4f0,0xf4fc,0xf1d9,
	0xfdfc,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xfcfd,0xfdfc,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd
};

const unsigned short explosion2[528] =
{
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xfcfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf5e3,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xd2fc,0xfdc2,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfd,0xa8eb,0xfdcc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fd,0xa8b6,0xfdf1,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xebfc,0xb6a2,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fd,0xfce2,0xfcfd,0xcbfa,0xcba2,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,0xe2fd,0xf0c9,0xfafc,0xa8ef,0xd3a2,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xd2fd,0xd3b6,0xfafa,0xabcf,0xefb8,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfd,0xcbf4,0xcba2,0xefef,0xd0ab,0xf0ca,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xb9f1,0xafa9,0xd0db,0xd0b3,0xf4d3,0xfcfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcf9,0xd3f4,0xbfb8,0xcdd0,0xc3c3,0xf4e0,0xf4f4,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfcfc,0xfcfc,0xe8f0,0xd0d0,0xd0df,0x9b94,0xc9cf,0xfcd2,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfafc,0xe8fa,0xc4c4,0xcabf,0xb1d0,0x9b8b,0xcba9,0xfdf1,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfcfd,0xcceb,0xcbf0,0xb1c4,0x8b99,0x9995,0x9b99,0xcfa3,0xf4f0,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xf1fd,0xccd7,0xcfd9,0xb1ca,0x9696,0x96a3,0x9696,0xbfa3,0xcad0,0xebd3,0xfcfa,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xf5fd,0xf4f5,0xebfc,0xbfc4,0x96a3,0x9696,0xa396,0xcab1,0xa2bf,0xa2a9,0xb9b9,0xfdd7,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfafc,0xcae8,0x96b1,0x969b,0xb196,0xbfb1,0xaba9,0xebd3,0xd7eb,0xfdee,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfefd,0xf4fd,0xabcf,0xd0ca,0x96b1,0xb1a3,0xe8d0,0xe8e0,0xfdf4,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf1fd,0xd3cb,0xd0cf,0xafbf,0xbfbf,0xebcf,0xfdfc,0xfdfd,0xfdfb,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfefd,0xfdfd,0xd3d3,0xcfcf,0xdbef,0xbeaf,0xf1d3,0xfef4,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fd,0xd3eb,0xf0eb,0xfaf4,0xa8cf,0xfceb,0xfdf4,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4f5,0xf1f1,0xfcf4,0xfcfd,0xc0f0,0xfdd9,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xf1fd,0xfdf4,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd
};

const unsigned short explosion3[544] =
{
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,0xfdfd,0xfdfd,0xfdfd,0xfde5,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xfdfd,0xf3fd,0xfdcc,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfd,0xc2f4,0xfdc2,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfd,0xa4c9,0xfdda,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xe8fd,0xb6a8,
	0xfdf5,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xb9fc,
	0xcb9a,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf5fd,0xfdf2,0xfdfd,0xfdfd,
	0xa2f4,0xd390,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fd,0xfdcc,0xfdfd,
	0xfdfd,0xa2d3,0xf0a2,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,0xfdfd,0xfdfd,0xc8d4,
	0xfcfc,0xfcfd,0xa9b6,0xfabb,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,0xfdfd,0xf4fd,
	0xa6c9,0xfae8,0xebfc,0xa0a0,0xfad3,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,0xfdfd,
	0xe2fd,0x9ca6,0xefcf,0xcffa,0xa9a9,0xfceb,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,
	0xfdfd,0xd9fc,0xb89c,0xdfbf,0xabe0,0xcabf,0xfae8,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfefd,0xfdfd,0xebfc,0xa9b8,0xd0b3,0xb3d0,0xcfc4,0xfafa,0xfdf5,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfefd,0xfdfd,0xf4fa,0xbfd3,0xcdcd,0xacc3,0xcfb1,0xe8ef,0xfdd7,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfafc,0xf0fa,0xd0d3,0xdfd0,0x94cd,0xbf93,0xb9cf,0xfdf1,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfcfd,0xf4fc,0xfafa,0xafca,0xbfaf,0xd0c4,0x9bb1,0xa999,0xf0a8,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xf4f1,0xb9eb,0xdbcf,0xafbf,0x9999,0x9595,0x96a3,0x9f9f,0xe8b8,0xfcfa,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xeaf5,0xa4cc,0xd3bb,0xc4be,0x969f,0x9ba3,0x9996,0x9799,0xcaa9,0xcbcb,0xebd3,0xfdf4,
	0xfdfd,0xfefd,0xfdfd,0xfdfd,0xfdfd,0xf2fd,0xebe9,0xfaf4,0xafca,0x969f,0xa39b,0x9f99,0x9f99,0xbfb1,0xa2a9,0xa8a2,
	0xc0b4,0xf2cc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfafa,0xcafa,0xa3af,0x968b,0x8b96,0xad96,0xafaf,0x9aa2,
	0xd1cf,0xc0d1,0xd7cc,0xfdf5,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfafc,0xcbf0,0xbfaf,0xacca,0x968b,0xcaad,0xcfd0,
	0xcfd3,0xfaf0,0xfcfc,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xf1fd,0xbbb9,0xcab8,0xaddb,0x9f99,0xdbb3,
	0xfaef,0xfcfc,0xf9fc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf1fd,0xcbeb,0xcfcb,0xe0ca,0xbec4,
	0xcfab,0xf4eb,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfc,0xb9f0,0xebc9,0xfaef,
	0xb6f0,0xd2a8,0xf1fc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xd7fd,0xf1d9,0xf1f1,
	0xfcf4,0xd2fd,0xb4a5,0xfcfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xdcfd,0xfdeb,
	0xf5fd,0xfdfd,0xf4fd,0xc0c2,0xfcfc,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfc,
	0xfdfd,0xfdf5,0xfdfd,0xfdfd,0xe9f2,0xfcfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xf9fd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd
};

const unsigned short explosion4[648] =
{
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf9fd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdf5,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fd,
	0xfdd7,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xccfc,0xfdd6,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfcfd,0xa5e2,0xfdf5,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xd1fc,0xa5b4,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xb6eb,0xd29c,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0x90d1,0xf49c,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0x90a8,0xfcb6,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf2fd,0xfdeb,0xfdfd,0xf9fd,0xf1fd,0x90a0,0xfdc0,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xccfd,0xfcb9,0xfdfc,0xfdfd,0xc9fc,0xa0a0,0xfdeb,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xebfd,0xe8a8,0xfdfa,0xfdfd,0xa8fa,
	0xa297,0xfcfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfd,0xbeb8,0xfceb,
	0xfcf5,0x9ad3,0xb99a,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xcbfd,
	0xa3a9,0xfab9,0xfdfd,0xa3be,0xd3a2,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xb9fd,0xb19f,0xeba9,0xe2fd,0xa99a,0xf0bb,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xd3fc,0x9695,0xd3af,0xc9f1,0xbfa9,0xf0c4,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xeffa,0xa3a9,0xc4b3,0xa2e8,0xcaaf,0xfadb,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,0xfdfe,0xfcfd,0xeffa,0xb1c4,0xc3ac,0xa9c4,0xa39f,0xfae0,0xccfa,0xfdd7,0xfdfd,
	0xfdfd,0xf9fd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,0xfdfd,0xfdfe,0xfafc,0xd0e0,0xdfb3,0xa3df,0x9696,0xd3c4,0xc0a4,
	0xfdf4,0xfdfd,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfefd,0xfcfd,0xbed1,0xcabe,0xdfdf,0xa3df,0x938b,
	0xbe95,0xfdc9,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fd,0xfafa,0xcbc9,0xd3f4,0xa9a9,0xa39f,0xaca3,
	0xa3b3,0x9996,0xa09f,0xfdf1,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xd1f4,0xd3d2,0xb2b6,0xc4be,0x9faf,
	0xa394,0x8e9b,0x9b8e,0x8b96,0xa097,0xf2d4,0xfdf5,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xebfd,0xcbd2,0xa9a0,
	0xcabe,0xb1bf,0x9696,0x9593,0x9f8a,0x9696,0x9f96,0xb2b8,0xcbb2,0xf4eb,0xfdfc,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xf4fd,
	0xc9eb,0xebc9,0xeff0,0xa9bf,0x969f,0x9595,0x939f,0x9696,0xb1ac,0x97a9,0x9797,0x9187,0xb9a4,0xd7c0,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfafa,0xcaef,0x93af,0x938a,0x9797,0x9b93,0xadac,0xa0a9,0xa297,0xd1cf,0xc0d1,0xb5b4,
	0xf5d6,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcfc,0xa9ef,0xa9af,0xa9bf,0x9797,0xad93,0xcac4,0xcbcb,0xa8a8,0xfaeb,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xe8fd,0xa9a8,0xbfaf,0xbfe0,0x9795,0xa99f,0xf0db,0xfdfc,
	0xf2fd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xa4e9,0xcbb6,0xb8b8,0xcac4,0xa0a2,0xa0a9,
	0xf0d3,0xfdfd,0xfdfd,0xfefd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfcf4,0xb8f0,0xd3a8,0xf4eb,
	0xb6ef,0xa0a0,0xf4eb,0xfdf4,0xfdfd,0xfdfd,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xe2fd,0xd3b9,
	0xebd3,0xfcf4,0xe0fa,0xa2a2,0xfcd3,0xf5fd,0xfdfd,0xfdfd,0xfdfe,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xb4f4,0xfac0,0xfcf1,0xfdf1,0xfcfc,0xa8d2,0xfdb9,0xfefd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xc2ea,0xfdfd,0xfdf1,0xf9fd,0xfdfd,0x91fd,0xfdb4,0xfdf6,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xd7fd,0xfdd6,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd,0xfdfd
};
