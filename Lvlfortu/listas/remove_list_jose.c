#include <stdlib.h> //libreria que incluye free.
#include "ft_list.h" //libreria que usará MOULINETTE para corregir

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)//si el nodo esta vacio o la lista esta vacia.
		return;

	t_list *aux = *begin_list;//aux apunta a donde apunte begin_list.

	if (cmp(aux->data, data_ref) == 0) //cmp compara dos void* y devuelve 0 sin son iguales.
	{								   
		*begin_list = aux->next;		//adelanto begin_list y libero aux.
		free(aux);
		ft_list_remove_if(begin_list, data_ref, cmp); //mando begin_list(adelantado previamente),data_ref y cmp.
	}
	else // si cmp no da 0, aux->data no coincide con data_ref. 
	{
		aux = *begin_list;
		ft_list_remove_if(&aux->next, data_ref, cmp); // enviamos el siguiente nodo.
	}
}