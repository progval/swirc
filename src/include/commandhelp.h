#ifndef COMMAND_HELP_H
#define COMMAND_HELP_H
/* commandhelp.h
   Copyright (C) 2018-2021 Markus Uhlin. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   - Redistributions of source code must retain the above copyright notice,
     this list of conditions and the following disclaimer.

   - Redistributions in binary form must reproduce the above copyright notice,
     this list of conditions and the following disclaimer in the documentation
     and/or other materials provided with the distribution.

   - Neither the name of the author nor the names of its contributors may be
     used to endorse or promote products derived from this software without
     specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE. */

//lint -e786

static const char *away_usage[] = {
    "usage: /away [reason]",
    "",
    "Marks yourself as away with reason. If reason is omitted you'll",
    "be marked as no longer away.",
    "",
};

static const char *ban_usage[] = {
    "usage: /ban <mask>",
    "",
    "Set a ban. The active window must be an IRC channel.",
    "",
};

static const char *banlist_usage[] = {
    "usage: /banlist [channel]",
    "",
    "Outputs channel banlist. If channel is omitted and the active",
    "window is an IRC channel, it'll output the banlist for that",
    "channel.",
    "",
};

static const char *beep_usage[] = {
    "usage: /beep <nickname>",
    "",
    "Send beeps.",
    "",
};

static const char *boot_usage[] = {
    "usage: /boot <victim>",
    "",
    "In ICB mode: kick a user out of the active group.",
    "",
};

static const char *chanserv_usage[] = {
    "usage: /chanserv <[service hostname | --]> <command> [...]",
    "",
    "Communicate with channel services. If the first argument is '--'",
    "then the value of configuration option chanserv_host is used as",
    "service hostname. See also NICKSERV.",
    "",
};

static const char *cleartoasts_usage[] = {
    "usage: /cleartoasts",
    "",
    "On Windows Swirc sends toast notifications. By issuing this command all",
    "notifications associated with Swirc will be cleared.",
    "",
};

static const char *close_usage[] = {
    "usage: /close",
    "",
    "Close the active window. It's not possible to close the status",
    "window. And while connected it's not possible to close a channel;",
    "in that case instead use /part.",
    "",
};

static const char *colormap_usage[] = {
    "usage: /colormap",
    "",
    "Output colors.",
    "",
};

static const char *connect_usage[] = {
    "usage: /connect [-tls] <server[:port]>",
    "",
    "Connect to given server. If the port is omitted port 6667 will be",
    "chosen. And if the port is 7326 ICB mode is turned on automatic-",
    "ally. Further, if the port is 6697 swirc attempts to initiate a",
    "TLS/SSL connection, as well as if -tls is present.",
    "",
    "It is possible to connect to a certain IRC network by only",
    "entering the network name. For example: /connect -tls freenode,",
    "will connect to freenode using an encrypted connection.",
    "Preconfigured network names are:",
    "",
    "    - afternet",
    "    - anonops",
    "    - blitzed",
    "    - efnet",
    "    - freenode",
    "    - ircnet",
    "    - libera",
    "    - quakenet",
    "    - undernet",
    "",
};

static const char *cycle_usage[] = {
    "usage: /cycle [channel]",
    "",
    "Cycle a channel, i.e. part plus join. If channel is omitted and",
    "the active window is an IRC channel, it'll cycle that channel.",
    "",
};

static const char *deop_usage[] = {
    "usage: /deop <nick>",
    "",
    "Take channel operator privilege.",
    "",
};

static const char *disconnect_usage[] = {
    "usage: /disconnect [message]",
    "",
    "Disconnect from IRC, but don't quit the program. A disconnect",
    "message is optional.",
    "",
};

static const char *echo_usage[] = {
    "usage: /echo <text>",
    "",
    "Echo text.",
    "",
    TXT_BOLD "EXAMPLE" TXT_BOLD,
    "Echo " TXT_UNDERLINE "Hello World!" TXT_UNDERLINE ":",
    "    /echo Hello World!",
    "",
};

static const char *exlist_usage[] = {
    "usage: /exlist [channel]",
    "",
    "Outputs channel exception list. An exception mask (+e) overrides",
    "a ban mask. If channel is omitted and the active window is an IRC",
    "channel, it'll output the exception list for that channel.",
    "",
};

static const char *group_usage[] = {
    "usage: /group <name>",
    "",
    "Changes ICB group.",
    "",
};

static const char *help_usage[] = {
    "usage: /help [command]",
    "",
    "Outputs help. If a command is present, it'll output help for that",
    "command.",
    "",
};

#if NOT_YET
static const char *ignore_usage[] = {
    "usage: /ignore ...",
    "",
    "No help yet.",
    "",
};
#endif

static const char *ilist_usage[] = {
    "usage: /ilist [channel]",
    "",
    "Outputs channel invitation list. An invitation mask (+I)",
    "overrides the invite-only flag (+i). If channel is omitted and",
    "the active window is an IRC channel, it'll output the invitation",
    "list for that channel.",
    "",
};

static const char *invite_usage[] = {
    "usage: /invite <targ_nick> <channel>",
    "",
    "Invites targ_nick to channel.",
    "",
};

static const char *join_usage[] = {
    "usage: /join <channel> [key]",
    "",
    "Joins a channel (optionally by using a key). For a standard",
    "channel a leading hashtag (#) must be present.",
    "",
    TXT_BOLD "EXAMPLES" TXT_BOLD,
    "Join a channel with name freenode:",
    "    /join #freenode",
    "",
    "Join a key protected channel:",
    "    /join #secret KeyToJoin",
    "",
};

static const char *kick_usage[] = {
    "usage: /kick <nick1[,nick2][,nick3][...]> [reason]",
    "",
    "Kicks one or more users out of a channel as specified by a",
    "comma-separated list, and optionally with a reason. The active",
    "window must be an IRC channel.",
    "",
};

static const char *kickban_usage[] = {
    "usage: /kickban <nick> <mask> [reason]",
    "",
    "Initially designate a channel ban specified by <mask> and kick",
    "user <nick> out of a channel. Optionally with a reason.",
    "(The active window must be an IRC channel.)",
    "",
};

static const char *kill_usage[] = {
    "usage: /kill <nickname> <comment>",
    "",
    "Disconnect a user from the connected network.",
    "",
};

static const char *list_usage[] = {
    "usage: /list [<max_users[,>min_users][,pattern][...]]",
    "",
    "List channels and their topics. Without any arguments the output",
    "is HUGE. For example, /list >1500 will only list channels that",
    "have more than 1500 users.",
    "",
};

static const char *me_usage[] = {
    "usage: /me <message>",
    "",
    "Action message. Used to simulate role playing on IRC. The active",
    "window must be an IRC channel.",
    "",
};

static const char *mode_usage[] = {
    "usage: /mode <modes> [...]",
    "",
    "Alter modes.",
    "",
    TXT_BOLD "CHANNEL MODES" TXT_BOLD,
    "    o - give/take channel operator privilege",
    "    v - give/take the voice privilege",
    "",
    "    i - invite-only channel",
    "    m - moderated channel",
    "    n - no messages to channel from clients on the outside",
    "    p - private channel",
    "    s - secret channel",
    "    t - topic settable by channel operators only",
    "",
    "    k - set/remove the channel key (password)",
    "    l - set/remove the user limit to channel",
    "",
    "    b - set/remove ban mask to keep users out",
    "    e - set/remove an exception mask to override a ban mask",
    "    I - set/remove an invitation mask to automatically override",
    "        the invite-only flag",
    "",
    TXT_BOLD "USER MODES" TXT_BOLD,
    "    i - marks a user as invisible",
    "    w - user receives wallops",
    "",
    TXT_BOLD "EXAMPLES" TXT_BOLD,
    "    Give channel operator privilege to Companion on #foo:",
    "      /mode #foo +o Companion",
    "",
    "    Restrict messaging to channel #linux:",
    "      /mode #linux +n",
    "",
    "    Limit user count for #freenode to 10:",
    "      /mode #freenode +l 10",
    "",
    "    Deny all users with hostname spammers.net from joining",
    "    #chatzone:",
    "      /mode #chatzone +b *!*@spammers.net",
    "",
    "    Turn on reception of WALLOPS messages:",
    "      /mode MyNickname +w",
    "",
    /*
     * TODO: Sync with cmds.html
     */
};

static const char *msg_usage[] = {
    "usage: /msg <recipient> <message>",
    "",
    "Used to send private messages between users, as well as to send",
    "messages to channels.",
    "",
};

static const char *nick_usage[] = {
    "usage: /nick <new nickname>",
    "",
    "Set nickname.",
    "",
};

static const char *nickserv_usage[] = {
    "usage: /nickserv <[service hostname | --]> <command> [...]",
    "",
    "Communicate with nickname services.",
    "",
    "If the first argument is '--' then the:",
    "    - Value of configuration option nickserv_host is used as",
    "      service hostname",
    "    - Command call won't be added to the command history provided",
    "      that the second argument is identify",
    "",
    "The correct service hostname is not always the same as the",
    "visible hostname of NickServ. FYI at the AnonOps IRC network the",
    "visible hostname of NickServ is anonops.in (at the time of",
    "writing this) but services.anonops.com is urged to be used. As a",
    "fallback: use /query NickServ in order to communicate with the",
    "service.",
    "",
};

static const char *notice_usage[] = {
    "usage: /notice <recipient> <message>",
    "",
    "Used to send private messages between users, as well as to send",
    "messages to channels. (In notice form).",
    "",
};

static const char *op_usage[] = {
    "usage: /op <nick>",
    "",
    "Give channel operator privilege.",
    "",
};

static const char *oper_usage[] = {
    "usage: /oper <name> <password>",
    "",
    "Identify as an IRC op.",
    "",
};

static const char *part_usage[] = {
    "usage: /part [channel] [message]",
    "",
    "Parts a channel with an optional message. For a standard channel",
    "a leading hashtag (#) must be present. If the command is called",
    "without arguments it tries to part the current window which must",
    "be an IRC channel.",
    "",
    TXT_BOLD "EXAMPLES" TXT_BOLD,
    "  Part channel #chatzone with message "
    TXT_UNDERLINE "bye" TXT_UNDERLINE ":",
    "    /part #chatzone bye",
    "",
};

static const char *passmod_usage[] = {
    "usage: /passmod <nickname>",
    "",
    "Pass moderation privilege.",
    "In IRC mode this is a no operation.",
    "",
};

static const char *query_usage[] = {
    "usage: /query [nick]",
    "",
    "Start a query with nick. If nick is omitted, and provided that",
    "the active window is a query, close the query.",
    "",
};

static const char *quit_usage[] = {
    "usage: /quit [message]",
    "",
    "Disconnect from IRC and quit the program. A disconnect message is",
    "optional.",
    "",
};

static const char *resize_usage[] = {
    "usage: /resize",
    "",
    "Resize the terminal. For example, Windows doesn't send SIGWINCH,",
    "instead this command can be used. First resize the window then",
    "issue this command.",
    "",
};

static const char *rules_usage[] = {
    "usage: /rules",
    "",
    "Outputs network/server rules. Not all IRCd:s supports this",
    "command.",
    "",
};

static const char *sasl_usage[] = {
    "usage: /sasl <operation> [...]",
    "",
    "Simple Authentication and Security Layer.",
    "Operation can be either:",
    "",
    "    keygen [--force]",
    "    pubkey",
    "    mechanism [ecdsa-nist256p-challenge | plain | scram-sha-256]",
    "    username <name>",
    "    password <pass>",
    "    set [on | off]",
    "",
    "SASL is a method that allows identification to NickServ during",
    "the connection process eliminating the need to do it manually.",
    "(To use SASL, you must register your nickname.)",
    "",
    TXT_BOLD "EXAMPLES" TXT_BOLD,
    "  Identification using mechanism ecdsa-nist256p-challenge:",
    "    1) /sasl keygen",
    "    2) /sasl pubkey (print it)",
    "    3) /ns <services hostname> set pubkey <public key>",
    "    4) /sasl mechanism ecdsa-nist256p-challenge",
    "    5) /sasl username <your nickserv username>",
    "    6) /sasl password dummy",
    "    7) /sasl set on",
    "  (The only IRC network that I know of that is supporting this",
    "  mechanism is freenode.)",
    "",
    "  Identification using mechanism plain:",
    "    1) /sasl mechanism plain",
    "    2) /sasl username <your nickserv username>",
    "    3) /sasl password <your nickserv password>",
    "    4) /sasl set on",
    "",
};

static const char *say_usage[] = {
    "usage: /say <message>",
    "",
    "Say a message. This command can be used if you want say something",
    "with a leading command-character, i.e. a slash.",
    "",
};

static const char *servlist_usage[] = {
    "usage: /servlist [<mask> [<type>]]",
    "",
    "This command is used to list services currently connected to the network",
    "and visible to the user issuing the command. The optional parameters may",
    "be used to restrict the result of the query (to matching services names,",
    "and services type).",
    "",
};

static const char *set_usage[] = {
    "usage: /set [[setting] [value]]",
    "",
    "Alter Swirc settings.",
    "",
    TXT_BOLD "SETTING TYPES" TXT_BOLD,
    TXT_BOLD "bool" TXT_BOLD "      "
    "Bools are case insensitive and can have one of the",
    "          "
    "following values:",
    "          "
    "- on, true or yes",
    "          "
    "- off, false or no",
    "",
    TXT_BOLD "int" TXT_BOLD "       "
    "Integers. Swirc implements a min/max value for each",
    "          "
    "integer in order to keep its value safe. The error log",
    "          "
    "will tell if the restrictions for an integer aren't",
    "          "
    "within limits and, if so, that a preprogrammed fallback",
    "          "
    "value is being used instead.",
    "",
    TXT_BOLD "string" TXT_BOLD "    "
    "A sequence of characters",
    "",
    TXT_BOLD "EXAMPLES" TXT_BOLD,
    "  Output current values of all settings:",
    "    /set (without any arguments)",
    "",
    "  Turn beeps on/off:",
    "    /set beeps on",
    "    /set beeps off",
    "",
    /*
     * TODO: Sync with cmds.html
     */
};

static const char *squery_usage[] = {
    "usage: /squery <servicename> <text>",
    "",
    "This command is used similarly to '/msg'. The only difference is that the",
    "recipient MUST be a service.",
    "",
};

static const char *theme_usage[] = {
    "usage: /theme [install <name> | list-remote | set <name>]",
    "",
    "Management of themes on-the-fly.",
    "",
    TXT_BOLD "EXAMPLES" TXT_BOLD,
    "    Install theme named 'bx':",
    "        /theme install bx",
    "",
    "    List available themes:",
    "        /theme list-remote",
    "",
    "    Activate installed theme:",
    "        /theme set bx",
    "",
};

static const char *time_usage[] = {
    "usage: /time <target>",
    "",
    "Send a CTCP TIME request to target, which is either a nickname or",
    "an IRC channel.",
    "",
};

static const char *topic_usage[] = {
    "usage: /topic [new topic]",
    "",
    "Set a new topic for a channel. If new topic is omitted, display",
    "the current topic. Active window must be an IRC channel.",
    "",
};

static const char *unban_usage[] = {
    "usage: /unban <mask>",
    "",
    "Unset a ban. (The active window must be an IRC channel.)",
    "",
};

static const char *version_usage[] = {
    "usage: /version <target>",
    "",
    "Send a CTCP VERSION request to target, which is either a nickname",
    "or an IRC channel.",
    "",
};

static const char *who_usage[] = {
    "usage: /who <mask>",
    "",
    "Used by a client to generate a query which returns a list of",
    "information which 'matches' the mask parameter given by the",
    "client.",
    "",
    TXT_BOLD "EXAMPLES" TXT_BOLD,
    "  Show all staff:",
    "    /who freenode/staff/*",
    "",
    "  Show ppl with a german domain:",
    "    /who *.de",
    "",
    /*
     * TODO: Sync with cmds.html
     */
};

static const char *whois_usage[] = {
    "usage: /whois <nick>",
    "",
    "Used to query information about particular user.",
    "(Specified by nick)",
    "",
};

static const char *znc_usage[] = {
    "usage: /znc [*module] <command>",
    "",
    "This command simplifies communication with ZNC (an IRC bouncer).",
    "",
    TXT_BOLD "EXAMPLES" TXT_BOLD,
    "  Output ZNC version:",
    "    /znc version",
    "",
    "  Same as above:",
    "    /znc *status version",
    "",
};

//lint +e786

#endif
