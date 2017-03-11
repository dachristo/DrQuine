# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchristo <ybarbier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 11:35:46 by dchristo          #+#    #+#              #
#    Updated: 2017/03/11 19:42:34 by dchristo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLLEEN = Colleen
GRACE = Grace
SULLY = Sully

COLLEEN_C = Colleen.c
GRACE_C = Grace.c
SULLY_C = Sully.c

COLLEEN_TMP = tmp_colleen
GRACE_TMP = Grace_kid.c
SULLY_TMP = tmp_sully

CC = gcc

CFLAGS	= -Wall -Wextra -Werror

all: colleen grace sully
	@echo "\033[0m";

colleen:
	@echo "\033[0m";
	$(CC) $(CFLAGS) -o $(COLLEEN) $(COLLEEN_C) 
	@echo "\033[1;5;1;36m";
	@echo "+---------------------------------------------------+";
	@echo "| _________        .__  .__                         |";
	@echo "| \_   ___ \  ____ |  | |  |   ____   ____   ____   |";
	@echo "| /    \  \/ /  _ \|  | |  | _/ __ \_/ __ \ /    \  |";
	@echo "| \     \___(  <_> )  |_|  |_\  ___/\  ___/|   |  \ |";
	@echo "|  \______  /\____/|____/____/\___  >\___  >___|  / |";
	@echo "|         \/                      \/     \/     \/  |";
	@echo "+---------------------------------------by dchristo-+";		

grace:
	@echo "\033[0m";
	$(CC) $(CFLAGS) -o $(GRACE) $(GRACE_C) 
	@echo "\033[1;5;1;36m";
	@echo "+-----------------------------------------+";
	@echo "|     ________                            |";	
	@echo "|    /  _____/___________    ____  ____   |";
	@echo "|   /   \  __\_  __ \__  \ _/ ___\/ __ \  |";
	@echo "|   \    \_\  \  | \// __ \\  \__\  ___/   |";
	@echo "|    \______  /__|  (____  /\___  >___  > |";
	@echo "|           \/           \/     \/    \/  |";
	@echo "+-----------------------------by dchristo-+";

sully:
	@echo "\033[0m";
	$(CC) $(CFLAGS) -o $(SULLY) $(SULLY_C) 
	@echo "\033[1;5;1;36m";
	@echo "+-------------------------------------+";
	@echo "|                                     |";
	@echo "|    _________     .__  .__           |";
	@echo "|   /   _____/__ __|  | |  | ___.__.  |";
	@echo "|   \_____  \|  |  \  | |  |<   |  |  |";
	@echo "|    /        \  |  /  |_|  |_\___  | |";
	@echo "|   /_______  /____/|____/____/ ____| |";
	@echo "|           \/                \/      |";
	@echo "+-------------------------by dchristo-+";	

diff: diff_colleen diff_grace diff_sully

diff_colleen:
	./colleen > $(COLLEEN_TMP) ; diff $(COLLEEN_TMP) $(COLLEEN_C)

diff_grace:
	./grace ; chmod 755 $(GRACE_TMP) ;  diff $(GRACE_TMP) $(GRACE_C)

diff_sully:
	./sully > $(SULLY_TMP) ; diff $(SULLY_TMP) $(SULLy_C)

clean: 
	rm -rf $(COLLEEN_TMP) $(GRACE_TMP) $(SULLY_TMP)

fclean: clean
	rm -rf $(COLLEEN) $(GRACE) $(SULLY)

re: fclean all

.PHONY: clean fclean re all
