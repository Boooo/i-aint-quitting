#
# Table structure for table `mercenary_db`
#

DROP TABLE IF EXISTS `mercenary_db`;
CREATE TABLE `mercenary_db` (
	`ID` mediumint(9) unsigned NOT NULL default '0',
	`Sprite` text NOT NULL,
	`Name` text NOT NULL,
	`LV` tinyint(6) unsigned NOT NULL default '0',
	`HP` int(11) unsigned NOT NULL default '0',
	`SP` int(11) unsigned NOT NULL default '0',
	`Range1` tinyint(4) unsigned NOT NULL default '0',
	`ATK1` smallint(6) unsigned NOT NULL default '0',
	`ATK2` smallint(6) unsigned NOT NULL default '0',
	`DEF` smallint(6) unsigned NOT NULL default '0',
	`MDEF` smallint(6) unsigned NOT NULL default '0',
	`STR` smallint(6) unsigned NOT NULL default '0',
	`AGI` smallint(6) unsigned NOT NULL default '0',
	`VIT` smallint(6) unsigned NOT NULL default '0',
	`INT` smallint(6) unsigned NOT NULL default '0',
	`DEX` smallint(6) unsigned NOT NULL default '0',
	`LUK` smallint(6) unsigned NOT NULL default '0',
	`Range2` tinyint(4) unsigned NOT NULL default '0',
	`Range3` tinyint(4) unsigned NOT NULL default '0',
	`Scale` tinyint(4) unsigned NOT NULL default '0',
	`Race` tinyint(4) unsigned NOT NULL default '0',
	`Element` tinyint(4) unsigned NOT NULL default '0',
	`Speed` smallint(6) unsigned NOT NULL default '0',
	`aDelay` smallint(6) unsigned NOT NULL default '0',
	`aMotion` smallint(6) unsigned NOT NULL default '0',
	`dMotion` smallint(6) unsigned NOT NULL default '0',
	PRIMARY KEY (`ID`)
) ENGINE=MyISAM;

REPLACE INTO `mercenary_db` VALUES (1191,'MIMIC','Mimic',51,6120,187,2,150,900,10,40,44,121,1,60,75,110,10,12,1,0,60,100,972,500,288);
REPLACE INTO `mercenary_db` VALUES (1506,'DISGUISE','Disguise',55,7543,180,2,279,546,18,29,0,72,45,35,48,65,10,12,1,6,82,147,516,768,384);
REPLACE INTO `mercenary_db` VALUES (1275,'ALICE','Alice',62,10000,221,2,550,700,5,5,64,64,42,85,100,130,10,12,1,7,60,200,502,2304,480);
REPLACE INTO `mercenary_db` VALUES (1965,'M_WILD_ROSE','Wild Rose',38,2980,130,2,315,360,0,15,65,85,15,35,65,80,10,12,0,2,24,100,964,864,288);
REPLACE INTO `mercenary_db` VALUES (1966,'M_DOPPELGANGER','Doppelganger',72,249000,200,2,1340,1590,60,35,88,90,30,35,125,65,10,12,1,6,67,100,480,480,288);
REPLACE INTO `mercenary_db` VALUES (1967,'M_YGNIZEM','Egnigem Cenia',58,11200,320,2,823,1212,35,8,60,35,52,18,79,20,10,12,1,7,43,145,576,432,288);
REPLACE INTO `mercenary_db` VALUES (2000,'M_GAMEMASTER','[GM] Game Master',50,7000,250,2,100,50,6,17,1,109,1,60,215,111,10,0,0,7,20,150,450,432,300);
REPLACE INTO `mercenary_db` VALUES (2001,'F_GAMEMASTER','[GM] Game Master',50,7000,250,2,100,50,6,17,1,109,1,60,215,111,10,0,0,7,20,150,450,432,300);
REPLACE INTO `mercenary_db` VALUES (2034,'M_DESERT_WOLF_B','Baby Desert Wolf',9,164,15,1,500,600,0,0,1,9,9,5,40,40,10,12,0,2,23,100,1600,900,240);
REPLACE INTO `mercenary_db` VALUES (2037,'VALKYRIE_A','Valkyrie Randgris',90,5000,15,1,10,160,10,20,1,20,40,0,20,20,10,12,1,8,66,100,576,576,480);
REPLACE INTO `mercenary_db` VALUES (2038,'VALKYRIE_B','Valkyrie Randgris',90,10000,15,1,300,450,10,40,1,20,80,0,80,20,10,12,1,8,66,100,576,576,480);
REPLACE INTO `mercenary_db` VALUES (2058,'M_MIMIC','Mimic',51,6120,182,1,800,950,10,40,44,121,1,60,75,110,10,12,1,0,60,100,972,500,288);
REPLACE INTO `mercenary_db` VALUES (2059,'M_DISGUISE','Disguise',55,7543,180,2,526,693,18,29,0,72,45,35,48,65,10,12,1,6,82,147,516,768,384);
REPLACE INTO `mercenary_db` VALUES (2060,'M_ALICE','Alice',62,10000,221,1,700,850,5,5,64,64,42,85,100,130,10,12,1,7,60,200,502,1999,480);