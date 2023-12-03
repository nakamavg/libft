	#include "../libft.h" // Asegúrate de incluir el archivo de encabezado correcto
	
	void print_list(t_list * head) {
    t_list * current = head;

    while (current != NULL) {
		printf("Valor del nodo: %s\n", (char *)current->content);
        current = current->next;
    }
}
	int main()
	{	t_list 	*lista = NULL;
		// Crear un nuevo nodo 
		t_list *node = ft_lstnew("El primero que añadi");
		// Crear un nuevo nodo co
		t_list *node2 = ft_lstnew("Añadido con front");
		t_list *node3 = ft_lstnew("Añadido con back ");
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

		

		
	

		return 0;
	}