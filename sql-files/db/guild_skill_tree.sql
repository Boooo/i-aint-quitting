DROP TABLE IF EXISTS `guild_skill_tree`;
CREATE TABLE `guild_skill_tree` (
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
	PRIMARY KEY (`SkillID`)
) ENGINE=MyISAM;
	
REPLACE INTO `guild_skill_tree` VALUES (10000,1,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10001,1,10000,1,0,0,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10002,1,10000,1,0,0,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10003,3,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10004,10,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10005,0,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10006,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10007,5,0,0,0,0,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10008,5,10007,1,0,0,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10009,5,10006,1,0,0,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10010,1,10000,1,10004,2,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10011,3,10000,1,10004,5,10010,1,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10012,1,10011,1,0,0,0,0,0,0,0,0);
REPLACE INTO `guild_skill_tree` VALUES (10013,1,10000,1,10002,1,10004,5,10010,1,10011,1);
REPLACE INTO `guild_skill_tree` VALUES (10014,1,0,0,0,0,0,0,0,0,0,0);
