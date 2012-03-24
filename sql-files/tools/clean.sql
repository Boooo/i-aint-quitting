# Realiza uma limpeza na DB, removendo as entradas inválidas.
# USE POR SUA PRÓPRIA CONTA E RISCO!
# Criado por k3dt - (c) 2009 k3dt@reborn.cz

DELETE FROM `char` WHERE account_id NOT IN (SELECT account_id FROM `login`);

DELETE FROM `cart_inventory` WHERE char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `friends` WHERE char_id NOT IN (SELECT char_id FROM `char`);
DELETE FROM `friends` WHERE friend_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `global_reg_value` WHERE char_id <>'' AND char_id NOT IN (SELECT char_id FROM `char`);
DELETE FROM `global_reg_value` WHERE account_id <> '' AND account_id NOT IN (SELECT account_id FROM `login`);

DELETE FROM `guild` WHERE char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `guild_alliance` WHERE guild_id NOT IN (SELECT guild_id FROM `guild`);

DELETE FROM `guild_expulsion` WHERE guild_id NOT IN (SELECT guild_id FROM `guild`);

DELETE FROM `guild_member` WHERE guild_id NOT IN (SELECT guild_id FROM `guild`);
DELETE FROM `guild_member` WHERE char_id NOT IN (SELECT char_id FROM `char`);
DELETE FROM `guild_member` WHERE account_id NOT IN (SELECT account_id FROM `login`);

DELETE FROM `guild_position` WHERE guild_id NOT IN (SELECT guild_id FROM `guild`);

DELETE FROM `guild_skill` WHERE guild_id NOT IN (SELECT guild_id FROM `guild`);

DELETE FROM `guild_storage` WHERE guild_id NOT IN (SELECT guild_id FROM `guild`);

DELETE FROM `homunculus` WHERE char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `skill_homunculus` WHERE homun_id NOT IN (SELECT homun_id FROM `homunculus`);

DELETE FROM `hotkey` WHERE char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `inventory` WHERE char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `mail` WHERE dest_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `memo` WHERE char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `mercenary` WHERE char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `mercenary_owner` WHERE merc_id NOT IN (SELECT mer_id FROM `mercenary`);
DELETE FROM `mercenary_owner` WHERE char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `party` WHERE leader_char NOT IN (SELECT char_id FROM `char`);

DELETE FROM `pet` WHERE char_id<>'' AND account_id<>'' AND char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `quest` WHERE char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `sc_data` WHERE char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `skill` WHERE char_id NOT IN (SELECT char_id FROM `char`);

DELETE FROM `storage` WHERE account_id NOT IN (SELECT account_id FROM `login`);
