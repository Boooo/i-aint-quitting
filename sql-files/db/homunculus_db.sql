DROP TABLE IF EXISTS `homunculus_db`;
CREATE TABLE `homunculus_db` (
	`Class` smallint(6) unsigned NOT NULL default '0',
	`EvoClass` smallint(6) unsigned NOT NULL default '0',
	`Name` varchar(24) NOT NULL default '',
	`FoodID` smallint(6) unsigned NOT NULL default '0',
	`FoodDelay` int(11) unsigned NOT NULL default '0',
	`BaseSize` tinyint(2) unsigned NOT NULL default '0',
	`EvoSize` tinyint(2) unsigned NOT NULL default '0',
	`Race` tinyint(2) unsigned NOT NULL default '0',
	`Element` tinyint(2) unsigned NOT NULL default '0',
	`bASPD` smallint(5) unsigned NOT NULL default '0',
	`bHP` smallint(5) unsigned NOT NULL default '0',
	`bSP` smallint(5) unsigned NOT NULL default '0',
	`bSTR` smallint(5) unsigned NOT NULL default '0',
	`bAGI` smallint(5) unsigned NOT NULL default '0',
	`bVIT` smallint(5) unsigned NOT NULL default '0',
	`bINT` smallint(5) unsigned NOT NULL default '0',
	`bDEX` smallint(5) unsigned NOT NULL default '0',
	`bLUK` smallint(5) unsigned NOT NULL default '0',
	`gnHP` smallint(5) unsigned NOT NULL default '0',
	`gxHP` smallint(5) unsigned NOT NULL default '0',
	`gnSP` smallint(5) unsigned NOT NULL default '0',
	`gxSP` smallint(5) unsigned NOT NULL default '0',
	`gnSTR` smallint(5) unsigned NOT NULL default '0',
	`gxSTR` smallint(5) unsigned NOT NULL default '0',
	`gnAGI` smallint(5) unsigned NOT NULL default '0',
	`gxAGI` smallint(5) unsigned NOT NULL default '0',
	`gnVIT` smallint(5) unsigned NOT NULL default '0',
	`gxVIT` smallint(5) unsigned NOT NULL default '0',
	`gnINT` smallint(5) unsigned NOT NULL default '0',
	`gxINT` smallint(5) unsigned NOT NULL default '0',
	`gnDEX` smallint(5) unsigned NOT NULL default '0',
	`gxDEX` smallint(5) unsigned NOT NULL default '0',
	`gnLUK` smallint(5) unsigned NOT NULL default '0',
	`gxLUK` smallint(5) unsigned NOT NULL default '0',
	`enHP` smallint(5) unsigned NOT NULL default '0',
	`exHP` smallint(5) unsigned NOT NULL default '0',
	`enSP` smallint(5) unsigned NOT NULL default '0',
	`exSP` smallint(5) unsigned NOT NULL default '0',
	`enSTR` smallint(5) unsigned NOT NULL default '0',
	`exSTR` smallint(5) unsigned NOT NULL default '0',
	`enAGI` smallint(5) unsigned NOT NULL default '0',
	`exAGI` smallint(5) unsigned NOT NULL default '0',
	`enVIT` smallint(5) unsigned NOT NULL default '0',
	`exVIT` smallint(5) unsigned NOT NULL default '0',
	`enINT` smallint(5) unsigned NOT NULL default '0',
	`exINT` smallint(5) unsigned NOT NULL default '0',
	`enDEX` smallint(5) unsigned NOT NULL default '0',
	`exDEX` smallint(5) unsigned NOT NULL default '0',
	`enLUK` smallint(5) unsigned NOT NULL default '0',
	`exLUK` smallint(5) unsigned NOT NULL default '0',
	PRIMARY KEY (`Class`)
) ENGINE=MyISAM;

REPLACE INTO `homunculus_db` VALUES (6001,6009,'Lif',537,60000,0,1,7,0,700,150,40,17,20,15,35,24,12,60,100,4,9,5,19,5,19,5,19,4,20,6,20,6,20,1,10,10,20,1,5,1,4,1,5,4,10,1,10,1,3);
REPLACE INTO `homunculus_db` VALUES (6002,6010,'Amistr',912,60000,0,1,2,0,700,320,10,20,17,35,11,24,12,80,130,1,4,8,20,4,20,4,20,1,10,3,19,3,19,10,20,1,10,1,10,1,5,4,10,1,3,1,4,1,5);
REPLACE INTO `homunculus_db` VALUES (6003,6011,'Filir',910,60000,0,1,2,0,700,90,25,29,35,9,8,30,9,45,75,3,6,4,20,8,20,1,10,3,19,4,20,3,19,5,15,5,15,4,10,1,10,1,3,1,4,1,5,1,5);
REPLACE INTO `homunculus_db` VALUES (6004,6012,'Vanilmirth',911,60000,0,1,0,0,700,80,11,11,11,11,11,11,11,30,150,0,7,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,10,1,10,1,10,1,10,1,10,1,10);
REPLACE INTO `homunculus_db` VALUES (6005,6013,'Lif',537,60000,0,1,7,0,700,150,40,17,20,15,35,24,12,60,100,4,9,5,19,5,19,5,19,4,20,6,20,6,20,1,10,10,20,1,5,1,4,1,5,4,10,1,10,1,3);
REPLACE INTO `homunculus_db` VALUES (6006,6014,'Amistr',912,60000,0,1,2,0,700,320,10,20,17,35,11,24,12,80,130,1,4,8,20,4,20,4,20,1,10,3,19,3,19,10,20,1,10,1,10,1,5,4,10,1,3,1,4,1,5);
REPLACE INTO `homunculus_db` VALUES (6007,6015,'Filir',910,60000,0,1,2,0,700,90,25,29,35,9,8,30,9,45,75,3,6,4,20,8,20,1,10,3,19,4,20,3,19,5,15,5,15,4,10,1,10,1,3,1,4,1,5,1,5);
REPLACE INTO `homunculus_db` VALUES (6008,6016,'Vanilmirth',911,60000,0,1,0,0,700,80,11,11,11,11,11,11,11,30,150,0,7,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,10,1,10,1,10,1,10,1,10,1,10);
REPLACE INTO `homunculus_db` VALUES (6048,6048,'Eira',6098,60000,1,1,7,0,700,150,40,17,20,15,35,24,12,60,100,4,9,5,19,5,19,5,19,4,20,6,20,6,20,1,10,10,20,1,5,1,4,1,5,4,10,1,10,1,3);
REPLACE INTO `homunculus_db` VALUES (6049,6049,'Bayeri',6112,60000,1,1,2,0,700,320,10,20,17,35,11,24,12,80,130,1,4,8,20,4,20,4,20,1,10,3,19,3,19,10,20,1,10,1,10,1,5,4,10,1,3,1,4,1,5);
REPLACE INTO `homunculus_db` VALUES (6050,6050,'Sera',6108,60000,1,1,4,0,700,90,25,29,35,9,8,30,9,45,75,3,6,4,20,8,20,1,10,3,19,4,20,3,19,5,15,5,15,4,10,1,10,1,3,1,4,1,5,1,5);
REPLACE INTO `homunculus_db` VALUES (6051,6051,'Dieter',6104,60000,1,1,0,0,700,80,11,11,11,11,11,11,11,30,150,0,7,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,10,1,10,1,10,1,10,1,10,1,10);
REPLACE INTO `homunculus_db` VALUES (6052,6052,'Elanor',6094,60000,1,1,2,0,700,320,10,20,17,35,11,24,12,80,130,1,4,8,20,4,20,4,20,1,10,3,19,3,19,10,20,1,10,1,10,1,5,4,10,1,3,1,4,1,5);