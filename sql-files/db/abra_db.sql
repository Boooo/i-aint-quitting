DROP TABLE IF EXISTS `abra_db`;
CREATE TABLE `abra_db` (
   `SkillID` int(11) unsigned NOT NULL default '0',
   `SkillName` text NOT NULL,
   `Lv` smallint(6) unsigned NOT NULL default '0',
   `Rate` smallint(6) unsigned NOT NULL default '0',
   PRIMARY KEY (`SkillID`)
) ENGINE=MyISAM;

#REPLACE INTO `abra_db` VALUES (1,'Basic Skill',1,0);

#REPLACE INTO `abra_db` VALUES (2,'Sword Mastery',1,0);
#REPLACE INTO `abra_db` VALUES (3,'Two-Handed Sword Mastery',1,0);
#REPLACE INTO `abra_db` VALUES (4,'Increase HP Recovery',1,0);
REPLACE INTO `abra_db` VALUES (5,'Bash',1,5000);
REPLACE INTO `abra_db` VALUES (6,'Provoke',1,5000);
REPLACE INTO `abra_db` VALUES (7,'Magnum Break',1,5000);
REPLACE INTO `abra_db` VALUES (8,'Endure',1,5000);

#REPLACE INTO `abra_db` VALUES (9,'Increase SP Recovery',1,0);
REPLACE INTO `abra_db` VALUES (10,'Sight',1,5000);
REPLACE INTO `abra_db` VALUES (11,'Napalm Beat',1,5000);
REPLACE INTO `abra_db` VALUES (12,'Safety Wall',4,5000);
REPLACE INTO `abra_db` VALUES (13,'Soul Strike',2,5000);
REPLACE INTO `abra_db` VALUES (14,'Cold Bolt',1,5000);
REPLACE INTO `abra_db` VALUES (15,'Frost Diver',2,5000);
REPLACE INTO `abra_db` VALUES (16,'Stone Curse',1,5000);
REPLACE INTO `abra_db` VALUES (17,'Fire Ball',2,5000);
REPLACE INTO `abra_db` VALUES (18,'Fire Wall',4,5000);
REPLACE INTO `abra_db` VALUES (19,'Fire Bolt',1,5000);
REPLACE INTO `abra_db` VALUES (20,'Lightning Bolt',1,5000);
REPLACE INTO `abra_db` VALUES (21,'Thunder Storm',2,5000);

#REPLACE INTO `abra_db` VALUES (22,'Divine Protection',1,0);
#REPLACE INTO `abra_db` VALUES (23,'Demon Bane',1,0);
REPLACE INTO `abra_db` VALUES (24,'Ruwach',1,5000);
REPLACE INTO `abra_db` VALUES (25,'Pneuma',6,5000);
REPLACE INTO `abra_db` VALUES (26,'Teleport',2,5000);
REPLACE INTO `abra_db` VALUES (27,'Warp Portal',4,5000);
REPLACE INTO `abra_db` VALUES (28,'Heal',1,5000);
REPLACE INTO `abra_db` VALUES (29,'Increase AGI',2,5000);
REPLACE INTO `abra_db` VALUES (30,'Decrease AGI',4,5000);
REPLACE INTO `abra_db` VALUES (31,'Aqua Benedicta',1,5000);
REPLACE INTO `abra_db` VALUES (32,'Signum Crucis',1,5000);
REPLACE INTO `abra_db` VALUES (33,'Angelus',1,5000);
REPLACE INTO `abra_db` VALUES (34,'Blessing',2,5000);
REPLACE INTO `abra_db` VALUES (35,'Cure',1,5000);

#REPLACE INTO `abra_db` VALUES (36,'Enlarge Weight Limit',1,0);
#REPLACE INTO `abra_db` VALUES (37,'Discount',1,0);
#REPLACE INTO `abra_db` VALUES (38,'Overcharge',1,0);
#REPLACE INTO `abra_db` VALUES (39,'Pushcart',1,0);
REPLACE INTO `abra_db` VALUES (40,'Item Appraisal',1,5000);
REPLACE INTO `abra_db` VALUES (41,'Vending',4,5000);
REPLACE INTO `abra_db` VALUES (42,'Mammonite',1,5000);

#REPLACE INTO `abra_db` VALUES (43,'Owl\'s Eye',1,0);
#REPLACE INTO `abra_db` VALUES (44,'Vulture\'s Eye',1,0);
REPLACE INTO `abra_db` VALUES (45,'Improve Concentration',4,5000);
REPLACE INTO `abra_db` VALUES (46,'Double Strafe',1,5000);
REPLACE INTO `abra_db` VALUES (47,'Arrow Shower',2,5000);

#REPLACE INTO `abra_db` VALUES (48,'Double Attack',1,0);
#REPLACE INTO `abra_db` VALUES (49,'Improve Dodge',1,0);
REPLACE INTO `abra_db` VALUES (50,'Steal',2,5000);
REPLACE INTO `abra_db` VALUES (51,'Hiding',2,5000);
REPLACE INTO `abra_db` VALUES (52,'Envenom',1,5000);
REPLACE INTO `abra_db` VALUES (53,'Detoxify',1,5000);

REPLACE INTO `abra_db` VALUES (54,'Resurrection',1,5000);

#REPLACE INTO `abra_db` VALUES (55,'Spear Mastery',1,0);
REPLACE INTO `abra_db` VALUES (56,'Pierce',2,4000);
REPLACE INTO `abra_db` VALUES (57,'Brandish Spear',6,4000);
REPLACE INTO `abra_db` VALUES (58,'Spear Stab',1,4000);
REPLACE INTO `abra_db` VALUES (59,'Spear Boomerang',4,4000);
REPLACE INTO `abra_db` VALUES (60,'TwoHand Quicken',1,4000);
REPLACE INTO `abra_db` VALUES (61,'Counter Attack',2,4000);
REPLACE INTO `abra_db` VALUES (62,'Bowling Bash',6,4000);
#REPLACE INTO `abra_db` VALUES (63,'Peco Peco Riding',1,0);
#REPLACE INTO `abra_db` VALUES (64,'Cavalier Mastery',1,0);

#REPLACE INTO `abra_db` VALUES (65,'Mace Mastery',1,0);
REPLACE INTO `abra_db` VALUES (66,'Impositio Manus',1,4000);
REPLACE INTO `abra_db` VALUES (67,'Suffragium',2,4000);
REPLACE INTO `abra_db` VALUES (68,'Aspersio',2,4000);
REPLACE INTO `abra_db` VALUES (69,'B.S Sacramenti',4,4000);
REPLACE INTO `abra_db` VALUES (70,'Sanctuary',2,4000);
REPLACE INTO `abra_db` VALUES (71,'Slow poison',1,4000);
REPLACE INTO `abra_db` VALUES (72,'Status Recovery',1,4000);
REPLACE INTO `abra_db` VALUES (73,'Kyrie Eleison',2,4000);
REPLACE INTO `abra_db` VALUES (74,'Magnificat',2,4000);
REPLACE INTO `abra_db` VALUES (75,'Gloria',4,4000);
REPLACE INTO `abra_db` VALUES (76,'Lex Divina',2,4000);
REPLACE INTO `abra_db` VALUES (77,'Turn Undead',2,4000);
REPLACE INTO `abra_db` VALUES (78,'Lex Aeterna',4,4000);
REPLACE INTO `abra_db` VALUES (79,'Magnus Exorcismus',6,4000);

REPLACE INTO `abra_db` VALUES (80,'Fire Pillar',2,4000);
REPLACE INTO `abra_db` VALUES (81,'Sightrasher',2,4000);
#REPLACE INTO `abra_db` VALUES (82,'Fire Ivy',1,0);
REPLACE INTO `abra_db` VALUES (83,'Meteor Storm',6,4000);
REPLACE INTO `abra_db` VALUES (84,'Jupitel Thunder',2,4000);
REPLACE INTO `abra_db` VALUES (85,'Lord of Vermilion',6,4000);
REPLACE INTO `abra_db` VALUES (86,'Water Ball',4,4000);
REPLACE INTO `abra_db` VALUES (87,'Ice Wall',2,4000);
REPLACE INTO `abra_db` VALUES (88,'Frost Nova',1,4000);
REPLACE INTO `abra_db` VALUES (89,'Storm Gust',6,4000);
REPLACE INTO `abra_db` VALUES (90,'Earth spike',1,4000);
REPLACE INTO `abra_db` VALUES (91,'Heaven\'s Drive',2,4000);
REPLACE INTO `abra_db` VALUES (92,'Quagmire',4,4000);
REPLACE INTO `abra_db` VALUES (93,'Sense',1,4000);

#REPLACE INTO `abra_db` VALUES (94,'Iron Tempering',1,0);
#REPLACE INTO `abra_db` VALUES (95,'Steel Tempering',1,0);
#REPLACE INTO `abra_db` VALUES (96,'Enchanted Stone Craft',1,0);
#REPLACE INTO `abra_db` VALUES (97,'Oridecon Research',1,0);
#REPLACE INTO `abra_db` VALUES (98,'Smith Dagger',1,0);
#REPLACE INTO `abra_db` VALUES (99,'Smith Sword',1,0);
#REPLACE INTO `abra_db` VALUES (100,'Smith Two-handed Sword',1,0);
#REPLACE INTO `abra_db` VALUES (101,'Smith Axe',1,0);
#REPLACE INTO `abra_db` VALUES (102,'Smith Mace',1,0);
#REPLACE INTO `abra_db` VALUES (103,'Smith Knucklebrace',1,0);
#REPLACE INTO `abra_db` VALUES (104,'Smith Spear',1,0);
#REPLACE INTO `abra_db` VALUES (105,'Hilt Binding',1,0);
#REPLACE INTO `abra_db` VALUES (106,'Ore Discovery',1,0);
#REPLACE INTO `abra_db` VALUES (107,'Weaponry Research',1,0);
REPLACE INTO `abra_db` VALUES (108,'Weapon Repair',1,0);
#REPLACE INTO `abra_db` VALUES (109,'Skin Tempering',1,0);
REPLACE INTO `abra_db` VALUES (110,'Hammer Fall',1,4000);
REPLACE INTO `abra_db` VALUES (111,'Adrenaline Rush',2,4000);
REPLACE INTO `abra_db` VALUES (112,'Weapon Perfection',4,4000);
REPLACE INTO `abra_db` VALUES (113,'Power-Thrust',4,4000);
REPLACE INTO `abra_db` VALUES (114,'Maximize Power',6,4000);

REPLACE INTO `abra_db` VALUES (115,'Skid Trap',1,4000);
REPLACE INTO `abra_db` VALUES (116,'Land Mine',2,4000);
REPLACE INTO `abra_db` VALUES (117,'Ankle Snare',2,4000);
REPLACE INTO `abra_db` VALUES (118,'Shockwave Trap',4,4000);
REPLACE INTO `abra_db` VALUES (119,'Sandman',4,4000);
REPLACE INTO `abra_db` VALUES (120,'Flasher',4,4000);
REPLACE INTO `abra_db` VALUES (121,'Freezing Trap',4,4000);
REPLACE INTO `abra_db` VALUES (122,'Blast Mine',4,4000);
REPLACE INTO `abra_db` VALUES (123,'Claymore Trap',6,4000);
REPLACE INTO `abra_db` VALUES (124,'Remove Trap',1,4000);
REPLACE INTO `abra_db` VALUES (125,'Talkie box',1,4000);
#REPLACE INTO `abra_db` VALUES (126,'Beast Bane',1,0);
#REPLACE INTO `abra_db` VALUES (127,'Falconry Mastery',1,0);
#REPLACE INTO `abra_db` VALUES (128,'Steel Crow',1,0);
REPLACE INTO `abra_db` VALUES (129,'Blitz Beat',4,4000);
REPLACE INTO `abra_db` VALUES (130,'Detect',1,4000);
REPLACE INTO `abra_db` VALUES (131,'Spring Trap',1,4000);

#REPLACE INTO `abra_db` VALUES (132,'Righthand Mastery',1,0);
#REPLACE INTO `abra_db` VALUES (133,'Lefthand Mastery',1,0);
#REPLACE INTO `abra_db` VALUES (134,'Katar Mastery',1,0);
REPLACE INTO `abra_db` VALUES (135,'Cloaking',2,4000);
REPLACE INTO `abra_db` VALUES (136,'Sonic Blow',2,4000);
REPLACE INTO `abra_db` VALUES (137,'Grimtooth',4,4000);
REPLACE INTO `abra_db` VALUES (138,'Enchant Poison',2,4000);
REPLACE INTO `abra_db` VALUES (139,'Poison React',2,4000);
REPLACE INTO `abra_db` VALUES (140,'Venom Dust',4,4000);
REPLACE INTO `abra_db` VALUES (141,'Venom Splasher',4,4000);

REPLACE INTO `abra_db` VALUES (142,'First Aid',1,5000);
REPLACE INTO `abra_db` VALUES (143,'Act Dead',1,5000);
#REPLACE INTO `abra_db` VALUES (144,'Moving HP-Recovery',1,0);
#REPLACE INTO `abra_db` VALUES (145,'Fatal Blow',1,0);
REPLACE INTO `abra_db` VALUES (146,'Auto Berserk',1,0);
REPLACE INTO `abra_db` VALUES (147,'Arrow Crafting',1,5000);
REPLACE INTO `abra_db` VALUES (148,'Arrow Repel',1,5000);
REPLACE INTO `abra_db` VALUES (149,'Throw Sand',1,5000);
REPLACE INTO `abra_db` VALUES (150,'Back sliding',1,5000);
REPLACE INTO `abra_db` VALUES (151,'Find Stone',1,5000);
REPLACE INTO `abra_db` VALUES (152,'Stone Fling',1,5000);
REPLACE INTO `abra_db` VALUES (153,'Cart Revolution',1,5000);
REPLACE INTO `abra_db` VALUES (154,'Change Cart',1,5000);
REPLACE INTO `abra_db` VALUES (155,'Crazy Uproar',1,5000);
REPLACE INTO `abra_db` VALUES (156,'Holy Light',1,5000);
REPLACE INTO `abra_db` VALUES (157,'Energy Coat',1,5000);

#REPLACE INTO `abra_db` VALUES (210,'Gank',1,0);
REPLACE INTO `abra_db` VALUES (211,'Mug',1,4000);
REPLACE INTO `abra_db` VALUES (212,'Back Stab',4,4000);
#REPLACE INTO `abra_db` VALUES (213,'Stalk',1,0);
REPLACE INTO `abra_db` VALUES (214,'Sightless Raid',2,4000);
REPLACE INTO `abra_db` VALUES (215,'Divest Weapon',4,4000);
REPLACE INTO `abra_db` VALUES (216,'Divest shield',4,4000);
REPLACE INTO `abra_db` VALUES (217,'Divest armor',4,4000);
REPLACE INTO `abra_db` VALUES (218,'Divest helm',4,4000);
REPLACE INTO `abra_db` VALUES (219,'Snatch',4,4000);
REPLACE INTO `abra_db` VALUES (220,'Scribble',1,4000);
REPLACE INTO `abra_db` VALUES (221,'Piece',1,0);
REPLACE INTO `abra_db` VALUES (222,'Remover',4,4000);
#REPLACE INTO `abra_db` VALUES (223,'Slyness',1,0);
#REPLACE INTO `abra_db` VALUES (224,'Haggle',1,0);
#REPLACE INTO `abra_db` VALUES (225,'Intimidate',1,0);

#REPLACE INTO `abra_db` VALUES (226,'Axe Mastery',1,0);
#REPLACE INTO `abra_db` VALUES (227,'Potion Research',1,0);
REPLACE INTO `abra_db` VALUES (228,'Prepare Potion',1,4000);
REPLACE INTO `abra_db` VALUES (229,'Bomb',2,4000);
REPLACE INTO `abra_db` VALUES (230,'Acid terror',2,4000);
REPLACE INTO `abra_db` VALUES (231,'Aid Potion',2,4000);
REPLACE INTO `abra_db` VALUES (232,'Summon Flora',4,4000);
REPLACE INTO `abra_db` VALUES (233,'Summon Marine Sphere',4,4000);
REPLACE INTO `abra_db` VALUES (234,'Alchemical Weapon',4,4000);
REPLACE INTO `abra_db` VALUES (235,'Synthesized Shield',4,4000);
REPLACE INTO `abra_db` VALUES (236,'Synthetic Armor',4,4000);
REPLACE INTO `abra_db` VALUES (237,'Biochemical Helm',4,4000);

#REPLACE INTO `abra_db` VALUES (238,'Bioethics',1,0);
#REPLACE INTO `abra_db` VALUES (239,'Biotechnology',1,0);
#REPLACE INTO `abra_db` VALUES (240,'Life Creation',1,0);
#REPLACE INTO `abra_db` VALUES (241,'Cultivation',1,0);
#REPLACE INTO `abra_db` VALUES (242,'Flame control',1,0);
#REPLACE INTO `abra_db` VALUES (243,'Call Homunculus',1,0);
#REPLACE INTO `abra_db` VALUES (244,'Vaporize',1,0);
#REPLACE INTO `abra_db` VALUES (245,'Drillmaster',1,0);
#REPLACE INTO `abra_db` VALUES (246,'Heal Homunculus',1,0);
#REPLACE INTO `abra_db` VALUES (247,'Resurrect Homunculus',1,0);

#REPLACE INTO `abra_db` VALUES (248,'Faith',1,0);
REPLACE INTO `abra_db` VALUES (249,'Guard',1,4000);
REPLACE INTO `abra_db` VALUES (250,'Smite',2,4000);
REPLACE INTO `abra_db` VALUES (251,'Shield boomerang',2,4000);
REPLACE INTO `abra_db` VALUES (252,'Shield Reflect',4,4000);
REPLACE INTO `abra_db` VALUES (253,'Holy cross',2,4000);
REPLACE INTO `abra_db` VALUES (254,'Grand cross',6,4000);
REPLACE INTO `abra_db` VALUES (255,'Sacrifice',4,4000);
REPLACE INTO `abra_db` VALUES (256,'Resistant Souls',2,4000);
REPLACE INTO `abra_db` VALUES (257,'Defending Aura',4,4000);
REPLACE INTO `abra_db` VALUES (258,'Spear Quicken',1,4000);

#REPLACE INTO `abra_db` VALUES (259,'Iron fists',1,0);
#REPLACE INTO `abra_db` VALUES (260,'Spiritual Cadence',1,0);
REPLACE INTO `abra_db` VALUES (261,'Summon Spirit Sphere',1,4000);
REPLACE INTO `abra_db` VALUES (262,'Absorb Spirit Sphere',1,4000);
#REPLACE INTO `abra_db` VALUES (263,'Raging Trifecta Blow',1,0);
REPLACE INTO `abra_db` VALUES (264,'Snap',4,4000);
#REPLACE INTO `abra_db` VALUES (265,'Dodge',1,0);
REPLACE INTO `abra_db` VALUES (266,'Occult Impact',2,4000);
REPLACE INTO `abra_db` VALUES (267,'Throw Spirit Sphere',2,4000);
REPLACE INTO `abra_db` VALUES (268,'Mental Strength',4,4000);
REPLACE INTO `abra_db` VALUES (269,'Root',2,4000);
REPLACE INTO `abra_db` VALUES (270,'Fury',2,4000);
REPLACE INTO `abra_db` VALUES (271,'Asura Strike',6,4000);
REPLACE INTO `abra_db` VALUES (272,'Raging Quadruple Blow',1,0);
REPLACE INTO `abra_db` VALUES (273,'Raging Thrust',1,0);

#REPLACE INTO `abra_db` VALUES (274,'Study',1,0);
REPLACE INTO `abra_db` VALUES (275,'Cast Cancel',1,4000);
REPLACE INTO `abra_db` VALUES (276,'Magic Rod',1,4000);
REPLACE INTO `abra_db` VALUES (277,'Spell Break',2,4000);
#REPLACE INTO `abra_db` VALUES (278,'Free Cast',1,0);
REPLACE INTO `abra_db` VALUES (279,'Hindsight',2,4000);
REPLACE INTO `abra_db` VALUES (280,'Endow Blaze',2,4000);
REPLACE INTO `abra_db` VALUES (281,'Endow Tsunami',2,4000);
REPLACE INTO `abra_db` VALUES (282,'Endow Tornado',2,4000);
REPLACE INTO `abra_db` VALUES (283,'Endow Quake',2,4000);
#REPLACE INTO `abra_db` VALUES (284,'Dragonology',1,0);
REPLACE INTO `abra_db` VALUES (285,'Volcano',4,4000);
REPLACE INTO `abra_db` VALUES (286,'Deluge',4,4000);
REPLACE INTO `abra_db` VALUES (287,'Whirlwind',4,4000);
REPLACE INTO `abra_db` VALUES (288,'Magnetic Earth',4,4000);
REPLACE INTO `abra_db` VALUES (289,'Dispel',6,4000);
REPLACE INTO `abra_db` VALUES (290,'Hocus-pocus',4,4000);

REPLACE INTO `abra_db` VALUES (291,'Monocell',4,2500);
REPLACE INTO `abra_db` VALUES (292,'Class Change',8,2500);
REPLACE INTO `abra_db` VALUES (293,'Summon Monster',6,3500);
REPLACE INTO `abra_db` VALUES (294,'Grampus Morph',4,5000);
REPLACE INTO `abra_db` VALUES (295,'Grim Reaper',8,2000);
#REPLACE INTO `abra_db` VALUES (296,'Gold Digger',6,4000);
REPLACE INTO `abra_db` VALUES (297,'Beastly Hypnosis',6,4000);
REPLACE INTO `abra_db` VALUES (298,'Questioning',4,5000);
REPLACE INTO `abra_db` VALUES (299,'Gravity',4,5000);
#REPLACE INTO `abra_db` VALUES (300,'Leveling',10,500);
REPLACE INTO `abra_db` VALUES (301,'Suicide',4,2000);
REPLACE INTO `abra_db` VALUES (302,'Rejuvination',8,3000);
REPLACE INTO `abra_db` VALUES (303,'Coma',4,4000);

REPLACE INTO `abra_db` VALUES (304,'Amp',1,0);
REPLACE INTO `abra_db` VALUES (305,'Encore',1,0);
REPLACE INTO `abra_db` VALUES (306,'Lullaby',1,0);
REPLACE INTO `abra_db` VALUES (307,'Mental Sensing',1,0);
REPLACE INTO `abra_db` VALUES (308,'Down Tempo',1,0);
REPLACE INTO `abra_db` VALUES (309,'Battle Theme',1,0);
REPLACE INTO `abra_db` VALUES (310,'Harmonic Lick',1,0);
REPLACE INTO `abra_db` VALUES (311,'Classical Pluck',1,0);
REPLACE INTO `abra_db` VALUES (312,'Power Chord',1,0);
REPLACE INTO `abra_db` VALUES (313,'Acoustic Rhythm',1,0);
#REPLACE INTO `abra_db` VALUES (314,'Ragnarok',1,0);

#REPLACE INTO `abra_db` VALUES (315,'Music Lessons',1,0);
REPLACE INTO `abra_db` VALUES (316,'Melody Strike',1,4000);
REPLACE INTO `abra_db` VALUES (317,'Unchained Serenade',1,0);
REPLACE INTO `abra_db` VALUES (318,'Unbarring Octave',2,4000);
REPLACE INTO `abra_db` VALUES (319,'Perfect Tablature',1,0);
REPLACE INTO `abra_db` VALUES (320,'Impressive Riff',1,0);
REPLACE INTO `abra_db` VALUES (321,'Magic Strings',1,0);
REPLACE INTO `abra_db` VALUES (322,'Song of Lutie',1,0);

#REPLACE INTO `abra_db` VALUES (323,'Dance Lessons',1,0);
REPLACE INTO `abra_db` VALUES (324,'Slinging Arrow',1,4000);
REPLACE INTO `abra_db` VALUES (325,'Hip Shaker',1,0);
REPLACE INTO `abra_db` VALUES (326,'Dazzler',2,4000);
REPLACE INTO `abra_db` VALUES (327,'Focus Ballet',1,0);
REPLACE INTO `abra_db` VALUES (328,'Slow Grace',1,0);
REPLACE INTO `abra_db` VALUES (329,'Lady Luck',1,0);
REPLACE INTO `abra_db` VALUES (330,'Gypsy\'s Kiss',1,0);