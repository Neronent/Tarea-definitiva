#include<stdio.h>
#include<string.h>
#include<conio.h>


#define MAX_STRLEN 256

int main() {
	float descuento;
	char dia[MAX_STRLEN];
	int edad;
	char nombrecliente[MAX_STRLEN];
	char pelicula[MAX_STRLEN];
	char respuesta[MAX_STRLEN];
	char sala[MAX_STRLEN];
	char tipocliente[MAX_STRLEN];
	int valorsindescuento;
	float valoryacondescuento;
	valorsindescuento = 210;
	printf("Hola muy buenas tarde bienvenido al cine Nero, me podria brindar su nombre?\n");
	scanf("%s",nombrecliente);
	printf("Disculpe %s, Que dia es hoy?\n",nombrecliente);
	scanf("%s",dia);
	if (strcmp(dia,"lunes")==0) {
		printf("Ok gracias, que edad tiene?\n");
		scanf("%i",&edad);
		if (edad>65) {
			tipocliente = 'Tipo B';
			printf("Que pelicula desea ver?\n");
			printf("Sonic, IT, Los 4 fantasticos, Dora la exploradora\n");
			scanf("%s",pelicula);
			if (strcmp(pelicula,"Sonic")==0) {
				sala == "SalaA";
				descuento = 0.35;
				valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
				printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
			} else {
				if (strcmp(pelicula,"IT")==0) {
					strcpy(sala, "SalaB");
					descuento = 0.35;
					valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
					printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
				} else {
					if (strcmp(pelicula,"Los 4 fantasticos")==0) {
						sala = "SalaC";
						descuento = 0.35;
						valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
						printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
					} else {
						if (strcmp(pelicula,"Dora la exploradora")==0) {
							sala = "SalaD";
							descuento = 0.35;
							valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
							printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
						} else {
							printf("Lo sentimos no tenemos esa opcion\n");
						}
					}
				}
			}
		} else {
			printf("Usted estudia?\n");
			scanf("%s",respuesta);
			if (strcmp(respuesta,"si")==0) {
				tipocliente = "Tipo A";
				printf("Que pelicula desea ver?\n");
				printf("Sonic, IT, Los 4 fantasticos, Dora la exploradora\n");
				scanf("%s",pelicula);
				if (strcmp(pelicula,"Sonic")==0) {
					sala = "SalaA";
					descuento = 0.15;
					valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
					printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
				} else {
					if (strcmp(pelicula,"IT")==0) {
						sala = "SalaB";
						descuento = 0.15;
						valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
						printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
					} else {
						if (strcmp(pelicula,"Los 4 fantasticos")==0) {
							sala = "SalaC";
							descuento = 0.15;
							valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
							printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
						} else {
							if (strcmp(pelicula,"Dora la exploradora")==0) {
								sala = "SalaD";
								descuento = 0.15;
								valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
								printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
							} else {
								printf("Lo sentimos no tenemos esa opcion\n");
							}
						}
					}
				}
			} else {
				tipocliente = "Tipo C";
				printf("Que pelicula desea ver?\n");
				printf("Sonic, IT, Los 4 fantasticos, Dora la exploradora\n");
				scanf("%s",pelicula);
				if (strcmp(pelicula,"Sonic")==0) {
					sala = "SalaA";
					descuento = 0.05;
					valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
					printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
				} else {
					if (strcmp(pelicula,"IT")==0) {
						sala = "SalaB";
						descuento = 0.05;
						valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
						printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
					} else {
						if (strcmp(pelicula,"Los 4 fantasticos")==0) {
							sala = "SalaC";
							descuento = 0.05;
							valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
							printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
						} else {
							if (strcmp(pelicula,"Dora la exploradora")==0) {
								sala = "SalaD";
								descuento = 0.05;
								valoryacondescuento = valorsindescuento-(valorsindescuento*descuento);
								printf("Entonces ser�a %s, %s, %s, %s, %i, %f, %f\n",nombrecliente,sala,dia,tipocliente,valorsindescuento,descuento,valoryacondescuento);
							} else {
								printf("Lo sentimos no tenemos esa opcion\n");
							}
						}
					}
				}
			}
		}
	} else {
		printf("Ok gracias, que edad tiene?\n");
		scanf("%i",&edad);
		if (edad>65) {
			tipocliente = "Tipo B";
			printf("Que pelicula desea ver?\n");
			printf("Sonic, IT, Los 4 fantasticos, Dora la exploradora\n");
			scanf("%s",pelicula);
			if (strcmp(pelicula,"Sonic")==0) {
				sala = "SalaA";
				printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
			} else {
				if (strcmp(pelicula,"IT")==0) {
					sala = "SalaB";
					printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
				} else {
					if (strcmp(pelicula,"Los 4 fantasticos")==0) {
						sala = "SalaC";
						printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
					} else {
						if (strcmp(pelicula,"Dora la exploradora")==0) {
							sala = "SalaD";
							printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
						} else {
							printf("Lo sentimos no tenemos esa opcion\n");
						}
					}
				}
			}
		} else {
			printf("Usted estudia?\n");
			scanf("%s",respuesta);
			if (strcmp(respuesta,"si")==0) {
				tipocliente = "Tipo A";
				printf("Que pelicula desea ver?\n");
				printf("Sonic, IT, Los 4 fantasticos, Dora la exploradora\n");
				scanf("%s",pelicula);
				if (strcmp(pelicula,"Sonic")==0) {
					sala = "SalaA";
					printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
				} else {
					if (strcmp(pelicula,"IT")==0) {
						sala = "SalaB";
						printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
					} else {
						if (strcmp(pelicula,"Los 4 fantasticos")==0) {
							sala = "SalaC";
							printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
						} else {
							if (strcmp(pelicula,"Dora la exploradora")==0) {
								sala = "SalaD";
								printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
							} else {
								printf("Lo sentimos no tenemos esa opcion\n");
							}
						}
					}
				}
			} else {
				tipocliente = "Tipo C";
				printf("Que pelicula desea ver?\n");
				printf("Sonic, IT, Los 4 fantasticos, Dora la exploradora\n");
				scanf("%s",pelicula);
				if (strcmp(pelicula,"Sonic")==0) {
					sala = "SalaA";
					printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
				} else {
					if (strcmp(pelicula,"IT")==0) {
						sala = "SalaB";
						printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
					} else {
						if (strcmp(pelicula,"Los 4 fantasticos")==0) {
							sala = "SalaC";
							printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
						} else {
							if (strcmp(pelicula,"Dora la exploradora")==0) {
								sala = "SalaD";
								printf("Entonces ser�a %s, %s, %s, %s, %i\n",nombrecliente,sala,dia,tipocliente,valorsindescuento);
							} else {
								printf("Lo sentimos no tenemos esa opcion\n");
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

