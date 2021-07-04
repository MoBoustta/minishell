all:
	@rm -rf a.out minishell
	@gcc -g3 -fsanitize=address -lreadline -L /Users/moboustt/.brew/opt/readline/lib/ -I/Users/moboustt/.brew/opt/readline/include/ \
		utility/*.c commands/*.c tokenizer/*.c parser/*.c lexer/*.c errors/*.c ast/*.c global_utils/*.c *.c -o minishell

