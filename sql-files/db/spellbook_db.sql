DROP TABLE IF EXISTS `spellbook_db`;
CREATE TABLE `spellbook_db` (
	`SkillID` int(11) unsigned NOT NULL default '0',
	`PreservePoints` smallint(6) unsigned NOT NULL default '0',
	`BookID` smallint(6) unsigned NOT NULl default '0',
	PRIMARY KEY (`SkillID`)
) ENGINE=MyISAM;

#Mago
REPLACE INTO `spellbook_db` VALUES (14,7,6190);
REPLACE INTO `spellbook_db` VALUES (19,7,6189);
REPLACE INTO `spellbook_db` VALUES (20,7,6191);
REPLACE INTO `spellbook_db` VALUES (21,9,6197);

#Bruxo
REPLACE INTO `spellbook_db` VALUES (83,10,6194);
REPLACE INTO `spellbook_db` VALUES (84,9,6198);
REPLACE INTO `spellbook_db` VALUES (85,10,6193);
REPLACE INTO `spellbook_db` VALUES (86,9,6199);
REPLACE INTO `spellbook_db` VALUES (89,10,6192);
REPLACE INTO `spellbook_db` VALUES (90,8,6201);
REPLACE INTO `spellbook_db` VALUES (91,9,6200);

#Arquimago
REPLACE INTO `spellbook_db` VALUES (2210,8,6205);
REPLACE INTO `spellbook_db` VALUES (2211,12,6204);
REPLACE INTO `spellbook_db` VALUES (2213,22,6195);
REPLACE INTO `spellbook_db` VALUES (2214,12,6203);
REPLACE INTO `spellbook_db` VALUES (2216,12,6202);
REPLACE INTO `spellbook_db` VALUES (2217,22,6196);