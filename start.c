/*
 * start.c
 *
 *  Created on: 8 mar. 2016
 *      Author: Korakiun
 */

#include <stdlib.h>
#include "Cheltuiala.h"
#include "List.h"
#include "UI.h"

int main() {

	Cheltuiala_test();
	List_test();

	List* repo = List_create();

	UI_start(repo);

	return 0;
}
