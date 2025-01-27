#ifndef NAMES_H
#define NAMES_H

#include "../textBuffer.h"

__SWIRC_BEGIN_DECLS

/*lint -sem(get_list_of_matching_channel_users, r_null) */

PTEXTBUF	get_list_of_matching_channel_users(const char *chan,
		    const char *search_var);

void	event_names_init(void);
void	event_names_deinit(void);

/*lint -sem(event_names_htbl_lookup, r_null) */

PNAMES	event_names_htbl_lookup(const char *nick, const char *channel);
int	event_names_htbl_insert(const char *nick, const char *channel);
int	event_names_htbl_modify_halfop(const char *nick, const char *channel,
	    bool is_halfop);
int	event_names_htbl_modify_op(const char *nick, const char *channel,
	    bool is_op);
int	event_names_htbl_modify_owner(const char *nick, const char *channel,
	    bool is_owner);
int	event_names_htbl_modify_superop(const char *nick, const char *channel,
	    bool is_superop);
int	event_names_htbl_modify_voice(const char *nick, const char *channel,
	    bool is_voice);
int	event_names_htbl_remove(const char *nick, const char *channel);
void	event_eof_names(struct irc_message_compo *);
void	event_names(struct irc_message_compo *);
void	event_names_htbl_remove_all(PIRC_WINDOW);

__SWIRC_END_DECLS

#endif
