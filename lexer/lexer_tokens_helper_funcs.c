#include "lexer.h"
#include "../minishell.h"

t_token *handle_escape_token(t_lexer *l, t_token *tok) {
	tok->literal = read_identifier(l, 0);
	return tok;
}

t_token *handle_illegal_token(const t_lexer *l, t_token *tok) {
	tok = new_token(illegal, l->ch, tok);
	errno = EPERM;
	return tok;
}

t_token *handle_eof_token(t_token *tok) {
	tok->literal = "newline";
	tok->type = end_of;
	return tok;
}

t_token *handle_dollar_token(t_lexer *l, t_token *tok) {
	tok->type = env_var;
	tok->literal = read_identifier(l, 0);
	return tok;
}

t_token *handle_identifier_with_no_quotes(t_lexer *l, t_token *tok) {
	tok->literal = read_identifier(l, 0);
	if(l->ch == '"' || l->ch == '\'')
	{
		char *tmp = parse_quoted(l, l->ch, 0, 0);
		if(tmp == NULL)
		{
			tok->type = illegal;
			return tok;
		}
		tok->literal = strcat(tok->literal, tmp);
	}
	tok->type = lookup_type(tok->literal);
	return tok;
}
