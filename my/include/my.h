#ifndef MY_H_
#define MY_H_

	/**
	* general functions
	*/
	int get_color(char, char, char);
	int my_find_prime_sup(int);
	int my_getnbr(char *);
	int my_is_prime(int);
	void my_isneg(int);
	struct s_stock_par *my_param_to_tab(int, char **);
	int my_power_rec(int, int);
	int my_put_nbr(int);
	int my_putchar(char);
	int my_putnbr_base(int, char *);
	int my_putstr(char *);
	char *my_revstr(char *);
	int my_show_wordtab(char **);
	int my_showmem(char *, int);
	int my_showstr(char *);
	void my_sort_int_tab(int *, int);
	char **sort_params(int, char **);
	int my_sort_wordtab(char **);
	int my_square_root(int);
	int my_str_isalpha(char *);
	int my_str_islower(char *);
	int my_str_isnum(char *);
	int my_str_isprintable(char *);
	int my_str_isupper(char *);
	char **my_str_to_wordtab(char *);
	char *my_strcapitalize(char *);
	char *my_strcat(char *, char *);
	int my_strcmp(char *, char *);
	char *my_strcpy(char *, char *);
	char *my_strdup(char *);
	int my_strlen(char *);
	char *my_strlowcase(char *);
	char *my_strncat(char *, char *, int);
	int my_strncmp(char *, char *, int);
	char *my_strncpy(char *, char *, int);
	char *my_strndup(char *, int);
	char *my_strstr(char *, char *);
	char *my_strupcase(char *);
	int my_swap(int *, int *);
	char *sum_params(int, char **);

	/**
	* list specific
	*/
	typedef struct s_list {
		void *data;
		struct s_list *next;
	} t_list;

	t_list *my_find_node_eq_in_list(t_list *, void *, int (*cmp)());
	t_list *my_params_in_list(int, char **);
	int my_list_size(t_list *);
	int my_rev_list(t_list **);
	int my_apply_on_list(t_list *, int (*f)(void*));
	int my_apply_on_eq_in_list(t_list *, int (*f)(), void *, int (*cmp)());
	void *my_find_elm_eq_in_list(t_list *, void *, int (*cmp)());
	int my_rm_all_eq_from_list(t_list **, void *, int (*cmp)());
	int my_add_list_to_list(t_list **, t_list *);
	int my_sort_list(t_list **, int (*cmp)());
	int my_put_elem_in_sort_list(t_list **, void *, int (*cmp)());
	int my_add_sort_list_to_sort_list(t_list **, t_list *, int (*cmp)());
	void show_list(t_list *);
	void add_node(void *, t_list **);


#endif
