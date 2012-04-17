// Copyright (c) Athena Dev Teams - Licensed under GNU GPL
// For more information, see COPYING in the main folder

#ifndef _INT_AUCTION_SQL_H_
#define _INT_AUCTION_SQL_H_

int inter_auction_parse_frommap(int fd);

int inter_auction_sql_init(void);
void inter_auction_sql_final(void);

#endif /* _INT_AUCTION_SQL_H_ */
