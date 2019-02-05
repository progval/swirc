#ifndef CONFIG_H
#define CONFIG_H

#include "int_unparse.h"

#define RECONNECT_BACKOFF_DELAY_DEFAULT 60
#define RECONNECT_DELAY_DEFAULT         10
#define RECONNECT_DELAY_MAX_DEFAULT     240
#define RECONNECT_RETRIES_DEFAULT       10

#ifdef __cplusplus
extern "C" {
#endif

typedef struct tagCONF_HTBL_ENTRY {
    char *name;
    char *value;
    struct tagCONF_HTBL_ENTRY *next;
} CONF_HTBL_ENTRY, *PCONF_HTBL_ENTRY;

void	config_init(void);
void	config_deinit(void);

/*lint -sem(Config_mod, r_null) */

bool		 config_bool_unparse(const char *, bool);
char		*Config_mod(const char *);
const char	*Config(const char *);
int		 config_item_install(const char *name, const char *value);
int		 config_item_undef(const char *name);
long int	 config_integer_unparse(struct integer_unparse_context *);
void		 config_create(const char *path, const char *mode);
void		 config_do_save(const char *path, const char *mode);
void		 config_readit(const char *path, const char *mode);

void cmd_set(const char *);

long int	get_reconnect_backoff_delay(void);
long int	get_reconnect_delay(void);
long int	get_reconnect_delay_max(void);
long int	get_reconnect_retries(void);

#ifdef __cplusplus
}
#endif

#endif /* CONFIG_H */
