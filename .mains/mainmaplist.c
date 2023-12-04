#include "../libft.h"

// Función para duplicar una cadena (ejemplo de función a pasar a ft_lstmap)
void	*change_string(void *content)
{
	char	*duplicate = ft_strdup("He cambiado el contenido de Content gracias al pasar la funcion change string por la funcion mapa ");
	return (duplicate);
}

// Función para imprimir el contenido de un nodo
void	print_node_content(void *content)
{
	if (content != NULL)
	{
		printf("Valor del nodo: %s\n", (char *)content);
	}
	else
	{
		printf("Valor del nodo: (null)\n");
	}
}

int main()
{
	char *str = ft_strdup("El valor inicial:10");
	char *str2 = ft_strdup("v");
	char *str3 = ft_strdup("PACO PACO");

	t_list	*node;
	t_list	*node2;
	t_list	*node3;
	t_list	*lista;

	lista = NULL;
	node  = ft_lstnew(str);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);

	ft_lstadd_front(&lista, node);
	ft_lstadd_back(&lista, node2);
	ft_lstadd_back(&lista, node3);

	// Aplicar ft_lstmap para duplicar cada cadena en la lista
	t_list	*new_list = ft_lstmap(lista, change_string, free);

	// Imprimir el contenido original de la lista
	printf("Contenido original de la lista:\n");
	ft_lstiter(lista, print_node_content);

	// Imprimir el contenido de la nueva lista después del mapeo
	printf("\nContenido de la nueva lista después del mapeo:\n");
	ft_lstiter(new_list, print_node_content);

	// Liberar la memoria asignada para ambas listas
	ft_lstclear(&lista, free);
	ft_lstclear(&new_list, free);

	return 0;
}
