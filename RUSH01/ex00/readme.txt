########## THE RUSH PROCESS ##########

* declaring three 4x4 int tables: 

- tab	the game table

- tdlr	top-down-left-right, the problem passed as parameter to the executable
	every row is a different direction problem

- flags	a table to set the known results and 0 to the rest

* checking if the arguments are valid:

- argc	has to be 2
	it will show "error" if not valid

- check_arguments.c	look if argument lenght is 31 and also if the numbers & spaces are valid
	it will show "error" if not valid

* conversion of the string argument to the int table tdlr:

- problem_conversion.c	we convert argv[1] to the table tdlr[4][4]
	str[i] - 48 is to convert the char number (in ascii) to a decimal one (ex: '3' - 48 = 3)

* once we did all the initial checks we start the actual game with the function: start_game

- we pass the 3 tables as parameters.. tdlr, flags and tab

- making_flags.c	5 similar functions to generate the flag table with the known values, one for each
	direction and one generic to make the complete table
	making_flags function starts putting zeros in all the cases then the known values
	known values are when the problem ask for a 4 (1, 2, 3, 4) or a 1 (4 in the closest one)

- make_solution.c	start_solution function will copy the flags table to tab but changing all 0s to 1s
	make_solution function with compare position of variables row & col in the flags table
	if the result is 0 then it will apply a valor using brute force to make a solution
	at this moment we dont know if the solution is valid or invalid
	it will return 0 if it doesnt find any solution and will show "error"

- check_solution	a function that checks the tab table with different functions to assure that is the
	correct solution
	validate_top, validate_down, validate_left & validate_right (validate.c)
	will check in every direction, that vision_skyscraper is equal to tdlr in the indicated
	position
	validate_rows, validate_cols, validate_doubles_rows, validate_doubles_cols (validate2.c)
	validate_rows & validate_cols will check if the sum of every column and row is equal to 10
	validate_doubles_rows & validate_doubles_cols will checks that there isnt any double valor
	If all the checks are correct it will return 1

- show_solution.c	If check_solution returns 1, then thats a valid solution
	It will print all the table tab in the screen (write)
	48 + tab[row][col] is to transform the int number to a char number (ex: 3 + 48 = '3')

######################################
