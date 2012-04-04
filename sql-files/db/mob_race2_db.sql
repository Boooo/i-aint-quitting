DROP TABLE IF EXISTS `mob_race2_db`;
CREATE TABLE `mob_race2_db` (
	`Race2ID` tinyint(2) unsigned NOT NULL default '0',
	`MobID1` smallint(6) unsigned NOT NULL default '0',
	`MobID2` smallint(6) unsigned,
	`MobID3` smallint(6) unsigned,
	`MobID4` smallint(6) unsigned,
	`MobID5` smallint(6) unsigned,
	`MobID6` smallint(6) unsigned,
	`MobID7` smallint(6) unsigned,
	`MobID8` smallint(6) unsigned,
	`MobID9` smallint(6) unsigned,
	PRIMARY KEY (`Race2ID`)
) ENGINE=MyISAM;

# Goblins
REPLACE INTO `mob_race2_db` VALUES (1,1122,1123,1124,1125,1126,1258,1299,NULL,NULL);
# Kobolds
REPLACE INTO `mob_race2_db` VALUES (2,1133,1134,1135,1282,1296,NULL,NULL,NULL,NULL);
# Orcs
REPLACE INTO `mob_race2_db` VALUES (3,1023,1152,1153,1189,1213,1273,NULL,NULL,NULL);
# Golems
REPLACE INTO `mob_race2_db` VALUES (4,1040,1278,1366,1497,2024,NULL,NULL,NULL,NULL);
# Guardians
REPLACE INTO `mob_race2_db` VALUES (5,1285,1286,1287,NULL,NULL,NULL,NULL,NULL,NULL);
# Ninja Classes (Pirate_Pride)
REPLACE INTO `mob_race2_db` VALUES (6,1315,1364,1401,1560,NULL,NULL,NULL,NULL,NULL);