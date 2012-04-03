DROP TABLE IF EXISTS `homun_skill_tree`;
CREATE TABLE `homun_skill_tree` (
	`Class` smallint(6) unsigned NOT NULL default '0',
	`SkillID` smallint(6) unsigned NOT NULL default '0',
	`MaxLv` tinyint(2) unsigned NOT NULL default '0',
	`PrereqSkillID1` smallint(6) unsigned NOT NULL default '0',
	`PrereqSkillLv1` smallint(6) unsigned NOT NULL default '0',
	`PrereqSkillID2` smallint(6) unsigned NOT NULL default '0',
	`PrereqSkillLv2` smallint(6) unsigned NOT NULL default '0',
	`PrereqSkillID3` smallint(6) unsigned NOT NULL default '0',
	`PrereqSkillLv3` smallint(6) unsigned NOT NULL default '0',
	`PrereqSkillID4` smallint(6) unsigned NOT NULL default '0',
	`PrereqSkillLv4` smallint(6) unsigned NOT NULL default '0',
	`PrereqSkillID5` smallint(6) unsigned NOT NULL default '0',
	`PrereqSkillLv5` smallint(6) unsigned NOT NULL default '0',
	PRIMARY KEY (`Class`)
) ENGINE=MyISAM;

#Lif
REPLACE INTO `homun_skill_tree` VALUES (6001,8001,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6001,8002,5,8001,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6001,8003,5,8001,5,0,0,0,0,0,0,0,0);
#Amistr
REPLACE INTO `homun_skill_tree` VALUES (6002,8005,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6002,8006,5,8005,5,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6002,8007,5,8006,3,0,0,0,0,0,0,0,0);
#Filir
REPLACE INTO `homun_skill_tree` VALUES (6003,8009,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6003,8010,5,8009,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6003,8011,5,8010,3,0,0,0,0,0,0,0,0);
#Vanilmirth
REPLACE INTO `homun_skill_tree` VALUES (6004,8013,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6004,8014,5,8013,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6004,8015,5,8013,5,0,0,0,0,0,0,0,0);
#Lif2
REPLACE INTO `homun_skill_tree` VALUES (6005,8001,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6005,8002,5,8001,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6005,8003,5,8001,5,0,0,0,0,0,0,0,0);
#Amistr2
REPLACE INTO `homun_skill_tree` VALUES (6006,8005,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6006,8006,5,8005,5,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6006,8007,5,8006,3,0,0,0,0,0,0,0,0);
#Filir2
REPLACE INTO `homun_skill_tree` VALUES (6007,8009,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6007,8010,5,8009,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6007,8011,5,8010,3,0,0,0,0,0,0,0,0);
#Vanilmirth2
REPLACE INTO `homun_skill_tree` VALUES (6008,8013,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6008,8014,5,8013,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6008,8015,5,8013,5,0,0,0,0,0,0,0,0);
#Lif_H
REPLACE INTO `homun_skill_tree` VALUES (6009,8001,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6009,8002,5,8001,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6009,8003,5,8001,5,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6009,8004,3,0,0,0,0,0,0,0,0,0,0);
#Amistr_H
REPLACE INTO `homun_skill_tree` VALUES (6010,8005,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6010,8006,5,8005,5,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6010,8007,5,8006,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6010,8008,3,0,0,0,0,0,0,0,0,0,0);
#Filir_H
REPLACE INTO `homun_skill_tree` VALUES (6011,8009,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6011,8010,5,8009,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6011,8011,5,8010,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6011,8012,3,0,0,0,0,0,0,0,0,0,0);
#Vanilmirth_H
REPLACE INTO `homun_skill_tree` VALUES (6012,8013,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6012,8014,5,8013,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6012,8015,5,8013,5,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6012,8016,3,0,0,0,0,0,0,0,0,0,0);
#Lif2_H
REPLACE INTO `homun_skill_tree` VALUES (6013,8001,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6013,8002,5,8001,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6013,8003,5,8001,5,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6013,8004,3,0,0,0,0,0,0,0,0,0,0);
#Amistr2_H
REPLACE INTO `homun_skill_tree` VALUES (6014,8005,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6014,8006,5,8005,5,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6014,8007,5,8006,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6014,8008,3,0,0,0,0,0,0,0,0,0,0);
#Filir2_H
REPLACE INTO `homun_skill_tree` VALUES (6015,8009,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6015,8010,5,8009,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6015,8011,5,8010,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6015,8012,3,0,0,0,0,0,0,0,0,0,0);
#Vanilmirth2_H
REPLACE INTO `homun_skill_tree` VALUES (6016,8013,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6016,8014,5,8013,3,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6016,8015,5,8013,5,0,0,0,0,0,0,0,0);
REPLACE INTO `homun_skill_tree` VALUES (6016,8016,3,0,0,0,0,0,0,0,0,0,0);
