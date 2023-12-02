	#include "../libft.h" // Asegúrate de incluir el archivo de encabezado correcto
	
	void print_list(t_list * head) {
    t_list * current = head;

    while (current != NULL) {
		printf("Valor del nodo: %s\n", (char *)current->content);
        current = current->next;
    }
}
	int main()
	{
		// Crear un nuevo nodo con contenido '42'
		t_list *node = ft_lstnew("42");
		// Crear un nuevo nodo con contenido '24'
		t_list *node2 = ft_lstnew("world");
		ft_lstadd_front(&node,node2);
		print_list(node2);
			// Liberar la memoria asignada al nodo
			free(node2);
		
	

		return 0;
	}