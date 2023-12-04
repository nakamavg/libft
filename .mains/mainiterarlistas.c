#include "../libft.h"

void print_node_content(void *content) {
    if (content != NULL) {
        printf("Valor del nodo: %s\n", (char *)content);
    } else {
        printf("Valor del nodo: (null)\n");
    }
}

int main() {
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


	ft_lstiter(lista,print_node_content);
  
	


    return 0;
}
