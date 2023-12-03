	#include "../libft.h" 

void print_list(t_list *head) {
    t_list *current = head;

    while (current != NULL)
	{
        if (current->content != NULL) {
            printf("Valor del nodo: %s\n", (char *)current->content);
        } else {
            printf("Valor del nodo: (null)\n");
        }
        current = current->next;
    }
}

void	ft_del(void *content)
{
	free(content);
}									
	int main()
	{	
		char *str = ft_strdup("El primero que añadi");
		char *str2 = ft_strdup("Añadido con front");
		char *str3 = ft_strdup("Añadido con back ");

		t_list 	*lista = NULL;
		// Crear un nuevo nodo 
		t_list *node = ft_lstnew(str);
		// Crear un nuevo nodo co
		t_list *node2 = ft_lstnew(str2);
		t_list *node3 = ft_lstnew(str3);
		ft_putstr_fd("**PRIMER NODO \n",1);
		ft_lstadd_front(&lista,node);
		print_list(lista);
		ft_putstr_fd("**APLICAMOS AÑADIR FRONT: \n",1);
		ft_lstadd_front(&lista,node2);
		print_list(lista);
		ft_putstr_fd("**APLICAMOS AÑADIR BACK: \n",1);
		ft_lstadd_back(&lista,node3);
		print_list(lista);
		printf("Numero de nodos : %i\n",ft_lstsize(lista));
		ft_putstr_fd("**Ultimo nodo de la lista(ft_lstlast): \n",1);
		print_list(ft_lstlast(lista));
		ft_putstr_fd("**Utilizamos lstdelone: \n",1);
		
		print_list(lista);
		ft_putstr_fd("**Utilizamos lstclear: \n",1);
		ft_lstclear(&lista,&ft_del);
		print_list(lista);
		return 0;
	}