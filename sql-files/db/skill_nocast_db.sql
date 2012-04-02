DROP TABLE IF EXISTS `skill_nocast_db`;
CREATE TABLE `skill_nocast_db` (
	`SkillID` int(11) unsigned NOT NULL default '0',
	`Flag` smallint(6) unsigned NOT NULL default '0'
) ENGINE=MyISAM;

# PVP
REPLACE INTO `skill_nocast_db` VALUES (1013,2);

# GVG
REPLACE INTO `skill_nocast_db` VALUES (26,4);
REPLACE INTO `skill_nocast_db` VALUES (27,4);
REPLACE INTO `skill_nocast_db` VALUES (87,4);
REPLACE INTO `skill_nocast_db` VALUES (150,4);
REPLACE INTO `skill_nocast_db` VALUES (219,4);
REPLACE INTO `skill_nocast_db` VALUES (336,4);
REPLACE INTO `skill_nocast_db` VALUES (361,4);
REPLACE INTO `skill_nocast_db` VALUES (362,4);
REPLACE INTO `skill_nocast_db` VALUES (395,4);
REPLACE INTO `skill_nocast_db` VALUES (409,4);
REPLACE INTO `skill_nocast_db` VALUES (410,4);
REPLACE INTO `skill_nocast_db` VALUES (491,4);
REPLACE INTO `skill_nocast_db` VALUES (530,4);
REPLACE INTO `skill_nocast_db` VALUES (691,4);
REPLACE INTO `skill_nocast_db` VALUES (1013,2048);

# BATTLEGROUND
REPLACE INTO `skill_nocast_db` VALUES (26,8);
REPLACE INTO `skill_nocast_db` VALUES (27,8);
REPLACE INTO `skill_nocast_db` VALUES (87,8);
REPLACE INTO `skill_nocast_db` VALUES (150,8);
REPLACE INTO `skill_nocast_db` VALUES (219,8);
REPLACE INTO `skill_nocast_db` VALUES (336,8);
REPLACE INTO `skill_nocast_db` VALUES (361,8);
REPLACE INTO `skill_nocast_db` VALUES (362,8);
REPLACE INTO `skill_nocast_db` VALUES (395,8);
REPLACE INTO `skill_nocast_db` VALUES (409,8);
REPLACE INTO `skill_nocast_db` VALUES (410,8);
REPLACE INTO `skill_nocast_db` VALUES (491,8);
REPLACE INTO `skill_nocast_db` VALUES (411,8);
REPLACE INTO `skill_nocast_db` VALUES (426,8);
REPLACE INTO `skill_nocast_db` VALUES (427,8);
REPLACE INTO `skill_nocast_db` VALUES (428,8);
REPLACE INTO `skill_nocast_db` VALUES (429,8);
REPLACE INTO `skill_nocast_db` VALUES (430,8);
REPLACE INTO `skill_nocast_db` VALUES (431,8);
REPLACE INTO `skill_nocast_db` VALUES (432,8);
REPLACE INTO `skill_nocast_db` VALUES (433,8);
REPLACE INTO `skill_nocast_db` VALUES (434,8);
REPLACE INTO `skill_nocast_db` VALUES (435,8);
REPLACE INTO `skill_nocast_db` VALUES (436,8);
REPLACE INTO `skill_nocast_db` VALUES (437,8);
REPLACE INTO `skill_nocast_db` VALUES (438,8);
REPLACE INTO `skill_nocast_db` VALUES (439,8);
REPLACE INTO `skill_nocast_db` VALUES (440,8);
REPLACE INTO `skill_nocast_db` VALUES (530,8);
REPLACE INTO `skill_nocast_db` VALUES (691,8);

# mixed
REPLACE INTO `skill_nocast_db` VALUES (488,3);

# Clone Forbidden/pointless skills
REPLACE INTO `skill_nocast_db` VALUES (77,16);
REPLACE INTO `skill_nocast_db` VALUES (79,16);

# Zone 1 - Aldebaran Turbo Track
REPLACE INTO `skill_nocast_db` VALUES (8,32);
REPLACE INTO `skill_nocast_db` VALUES (26,32);
REPLACE INTO `skill_nocast_db` VALUES (27,32);
REPLACE INTO `skill_nocast_db` VALUES (35,32);
REPLACE INTO `skill_nocast_db` VALUES (51,32);
REPLACE INTO `skill_nocast_db` VALUES (87,32);
REPLACE INTO `skill_nocast_db` VALUES (135,32);
REPLACE INTO `skill_nocast_db` VALUES (219,32);
REPLACE INTO `skill_nocast_db` VALUES (264,32);
REPLACE INTO `skill_nocast_db` VALUES (357,32);
REPLACE INTO `skill_nocast_db` VALUES (359,32);
REPLACE INTO `skill_nocast_db` VALUES (362,32);
REPLACE INTO `skill_nocast_db` VALUES (389,32);
REPLACE INTO `skill_nocast_db` VALUES (395,32);

# Zone 2 - Jail
REPLACE INTO `skill_nocast_db` VALUES (421,64);
REPLACE INTO `skill_nocast_db` VALUES (426,64);

# Zone 3 - Izlude Battle Arena
REPLACE INTO `skill_nocast_db` VALUES (219,128);
REPLACE INTO `skill_nocast_db` VALUES (26,128);

# Zone 4 - WoE:SE
REPLACE INTO `skill_nocast_db` VALUES (426,256);
REPLACE INTO `skill_nocast_db` VALUES (290,256);

# Zone 5 - Sealed Shrine
REPLACE INTO `skill_nocast_db` VALUES (12,512);
REPLACE INTO `skill_nocast_db` VALUES (26,512);
REPLACE INTO `skill_nocast_db` VALUES (219,512);
REPLACE INTO `skill_nocast_db` VALUES (361,512);
REPLACE INTO `skill_nocast_db` VALUES (691,512);

# Zone 6 - Endless Tower, Orcs Memory, Nidhoggurs Nest
REPLACE INTO `skill_nocast_db` VALUES (26,1024);
REPLACE INTO `skill_nocast_db` VALUES (87,1024);
REPLACE INTO `skill_nocast_db` VALUES (219,1024);
REPLACE INTO `skill_nocast_db` VALUES (405,1024);
REPLACE INTO `skill_nocast_db` VALUES (674,1024);

# Zone 7 - Towns
REPLACE INTO `skill_nocast_db` VALUES (232,2048);
REPLACE INTO `skill_nocast_db` VALUES (233,2048);
REPLACE INTO `skill_nocast_db` VALUES (491,2048);
REPLACE INTO `skill_nocast_db` VALUES (1013,2048);
