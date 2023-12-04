#include "../libft.h"

void	print_list(t_list *head)
{
	t_list	*current;

	current = head;
	while (current != NULL)
	{
		if (current->content != NULL)
		{
			printf("Valor del nodo: %s\n", (char *)current->content);
		}
		else
		{
			printf("Valor del nodo: (null)\n");
		}
		current = current->next;
	}
}

void	ft_del(void *content)
{
	free(content);
}
int	main(void)
{
	char *str = ft_strdup("El valor inicial:---EGUN ON----- Node 1");
	char *str2 = ft_strdup("Valor añadido como front:------- Node 2");
	char *str3 = ft_strdup("VALOR Añadido como back:-EGUN OF-Node 3");

	t_list	*node;
	t_list	*node2;
	t_list	*node3;
	t_list	*lista;

	lista = NULL;
	node  = ft_lstnew(str);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);

	ft_putstr_fd("**PRIMER NODO \n", 1);
	ft_lstadd_front(&lista, node);
	printf("Numero de nodos : %i\n", ft_lstsize(node));
	print_list(lista);
	ft_putstr_fd("**APLICAMOS AÑADIR FRONT: \n", 1);
	ft_lstadd_front(&lista, node2);
	printf("Numero de nodos : %i\n", ft_lstsize(node));
	print_list(lista);
	ft_putstr_fd("**APLICAMOS AÑADIR BACK: \n", 1);
	ft_lstadd_back(&lista, node3);
	printf("Numero de nodos : %i\n", ft_lstsize(lista));
	print_list(lista);
	ft_putstr_fd("**Ultimo nodo de la lista(ft_lstlast): \n", 1);
	print_list(ft_lstlast(lista));

	ft_putstr_fd("**Utilizamos lstdelone: \n", 1);
	ft_lstdelone(node3, &ft_del);
	printf("Numero de nodos : %i\n", ft_lstsize(lista));
	print_list(lista);

	ft_putstr_fd("**Utilizamos lstdelone por segunda vez: \n", 1);
	ft_lstdelone(node, &ft_del);
	print_list(lista);
	printf("Numero de nodos : %i\n", ft_lstsize(lista));
	ft_putstr_fd("**Utilizamos lstdelone por tercera vez: \n", 1);
	ft_lstdelone(node2, &ft_del);
	print_list(lista);
	printf("Numero de nodos : %i\n", ft_lstsize(lista));

	ft_putstr_fd("**Utilizamos list clear: \n", 1);
	ft_lstclear(&lista, &ft_del);
	print_list(lista);
	printf("Numero de nodos : %i\n", ft_lstsize(lista));

	return (0);
}