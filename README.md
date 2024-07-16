# C++

## Ex1
Feu un programa que, donat un mapa amb tresors i obstacles, digui a quina distància es troba el tresor accessible més llunyà a una posició inicial donada. Els moviments permesos són horitzontals o verticals, però no diagonals. Si cal, es pot passar per sobre dels tresors.

Entrada:
L’entrada comença amb el nombre de files n > 0 i de columnes m > 0 del mapa. Segueixen n files amb m caràcters cadascuna. Un punt indica una posició buida, una ‘X’ indica un obstacle, i una ‘t’ indica un tresor. Finalment, un parell de nombres f i c indiquen la fila i columna inicials (ambdues començant en 1) des de les quals cal començar a buscar tresors. Podeu suposar que f està entre 1 i n, que c està entre 1 i m, i que la posició inicial sempre està buida.

Sortida:
Escriviu el nombre mínim de passos des de la posició inicial fins a arribar al tresor més llunyà. Si no es pot arribar a cap tresor, cal indicar-ho.

## Ex2
Feu un programa que escrigui totes les maneres de posar r reis en un tauler n × n sense que cap rei n’amenaci cap altre. Recordeu que els reis amenacen totes les caselles veïnes, ja sigui horitzontalment, verticalment, o en diagonal.

Per exemple, aquestes són algunes maneres de posar 3 reis en un taulell 4 × 4:
showmover=false, label=false, maxfield=d4, setpieces=ka2,kb4,kc1 showmover=false, label=false, maxfield=d4, setpieces=ka3,kc4,kd2 showmover=false, label=false, maxfield=d4, setpieces=ka1,kc4,kd1 showmover=false, label=false, maxfield=d4, setpieces=ka1,kb3,kd4

Entrada:
L’entrada consisteix en dos naturals n > 0 i 0 ≤ r ≤ n2.

Sortida:
Escriviu totes les maneres de posar r reis en un tauler n × n sense que cap rei n’amenaci cap altre. Marqueu els reis amb una ‘K’, i les caselles buides amb un punt. Escriviu una línia amb deu guions després de cada taulell.
Informació sobre el corrector

Podeu escriure les solucions d’aquest exercici en qualsevol ordre.

Observació
Els jocs de proves d’aquest problema no requereixen un algorisme gaire enginyós.

## Ex3
Teniu una bossa inicialment buida, on hi podeu guardar paraules, i també esborrar-ne. Les paraules poden estar repetides. Esborrar una paraula vol dir esborrar una de les seves aparicions. Esborrar una paraula que no hi és no té cap efecte. En qualsevol moment us poden preguntar quina és la paraula (lexicogràficament) més gran de la bossa, i quantes vegades apareix. També us poden preguntar el mateix respecte de la paraula més petita.

Feu un programa que simuli aquest procés, i que respongui totes les preguntes sobre màxims i mínims que es facin en qualsevol moment.

Entrada:
L’entrada consisteix en diverses línies. Cada línia conté “store p”, on p és una paraula, o bé “delete p”, on p és una paraula, o bé “maximum?”, o bé “minimum?”. Les paraules tenen exclusivament una o més lletres minúscules.

Sortida:
Per a cada pregunta, escriviu quina és la paraula més gran (o més petita) continguda a la bossa en aquell moment. Si, en el moment de respondre alguna pregunta, la bossa estigués buida, cal indicar-ho. Seguiu el format de l’exemple.

## Ex4
Cal trobar tots els camins que una tortuga pot fer des d’una posició inicial fins a una posició final. El terra té n × m rajoles, cadascuna de les quals amb una lletra pintada. La tortuga només pot fer passos horitzontals i verticals, i no pot passar dos cops per la mateixa posició.

Entrada:
L’entrada comença amb n i m, seguit de n línies amb m lletres cadascuna. A continuació, un parell de naturals indiquen la fila i la columna inicials, i un parell de naturals indiquen la fila i la columna finals. La cantonada de dalt a l’esquerra es correspon a la posició (0, 0).

Sortida:
Escriviu tots els camins entre la posició inicial i la posició final.
Informació sobre el corrector

Podeu escriure les solucions d’aquest exercici en qualsevol ordre. 

## Ex5
En un tauler n × m hi ha monedes d’or i unes quantes trampes. En el tauler també hi ha alguns personatges: alfils i cavalls, els quals es mouen segons les regles dels escacs. Els personatges poden moure’s tantes vegades com vulguin, i poden passar per qualsevol casella sense trampa, estigui ocupada o no. Les monedes desapareixen quan algú les recull.

Feu un programa que escrigui la quantitat total de monedes que es poden recollir.

Entrada:
L’entrada té diversos casos. Cada cas consisteix en una línia amb n i m, seguida de n línies amb m caràcters cadascuna. Una ‘B’ indica un alfil. Una ‘K’ indica un cavall. Una ‘T’ indica una trampa. Un punt indica una casella buida. Un dígit indica una quantitat de monedes d’or. Tant n com m estan entre 1 i 200.

Sortida:
Per a cada cas, escriviu una línia amb el nombre de monedes que es poden recollir.

## Ex6
Feu un programa que, donat un mapa amb tresors i obstacles, digui a quants tresors es pot arribar des d’una posició inicial donada. Els moviments permesos són horitzontals o verticals, però no diagonals. Si cal, es pot passar per sobre dels tresors.

Entrada:
L’entrada comença amb el nombre de files n > 0 i de columnes m > 0 del mapa. Segueixen n files amb m caràcters cadascuna. Un punt indica una posició buida, una ‘X’ indica un obstacle, i una ‘t’ indica un tresor. Finalment, un parell de nombres f i c indiquen la fila i columna inicials (ambdues començant en 1) des de les quals cal començar a buscar tresors. Podeu suposar que f està entre 1 i n, que c està entre 1 i m, i que la posició inicial sempre està buida.

Sortida:
Escriviu el nombre de tresors accessibles des de la posició inicial.

## Ex7
Feu un programa de tornada enrere que escrigui totes les combinacions de longitud n que es poden formar amb les lletres ‘A’, ‘C’, ‘G’, ‘T’, per a una n donada.

Entrada:
L’entrada consisteix en un natural n > 0.

Sortida:
Escriviu totes les combinacions de n lletres ‘A’, ‘C’, ‘G’, ‘T’ en ordre lexicogràfic.

## Ex8
Donat un tauler rectangular que conté en Pac-man, digueu si pot arribar a menjar-se algun bolet energètic. Per poder arribar-hi, en Pac-man només pot fer moviments horitzontals i verticals, sense travessar cap mur. En Pac-man no pot estar mai massa a prop d’un fantasma: sempre hi ha d’haver una casella de marge, ja sigui horitzontalment, verticalment, o en diagonal. Fixeu-vos en els exemples d’entrada i sortida.

Entrada:
L’entrada consisteix en diversos casos. Cada cas comença amb el nombre de files f i el nombre de columnes c del tauler. Segueixen f files amb c caràcters cadascuna. Una ‘P’ indica la posició inicial d’en Pac-man. Una ‘F’ indica la posició d’un fantasma (que no es mou). Una ‘B’ indica la posició d’un bolet. Una ‘X’ indica un mur. Un punt indica una posició buida. Suposeu 3 ≤ f ≤ 100, 3 ≤ c ≤ 100, que les files i columnes de la vora del tauler només contenen murs, i que cada tauler té exactament una ‘P’.

Sortida:
Per a cada cas, digueu si en Pac-man es pot menjar algun bolet o no.

## Ex9
Feu un programa que, donat un graf no dirigit, digui si és possible pintar tots els seus vèrtexs només amb dos colors, de manera que no hi hagi dos vèrtexs veïns del mateix color.

Entrada:
L’entrada consisteix en diversos casos, cadascun amb el nombre de vèrtexs n i el nombre d’arestes m, seguits de m parells x y indicant una aresta entre x i y. Suposeu 1 ≤ n ≤ 104, 0 ≤ m ≤ 5n, que els vèrtexs es numeren entre 0 i n − 1, x ≠ y, i que no hi ha més d’una aresta entre tot parell x y.

Sortida:
Per a cada cas, escriviu “yes” si el graf és dos-colorejable, i “no” altrament.

## Ex10
Un cavall, dins d’un prat rectangular, vol saber a quantes flors pot arribar, i quina és la distància mitjana a aquestes flors des de la seva posició inicial. El cavall només pot fer els salts típics dels escacs (és a dir, modificar en dues unitats una component, i en una unitat l’altra component), i no pot sortir mai del prat ni trepitjar basses d’aigua.

Feu un programa que llegeixi la descripció d’un prat, i que calculi i escrigui el nombre de flors a les quals pot arribar el cavall, i la distància mitjana a aquestes flors, mesurada per a cada flor com el nombre mínim de salts d’escacs des de la posició inicial del cavall.

Entrada:
L’entrada comença amb el nombre de files n i de columnes m del mapa. Segueixen n files amb m caràcters cadascuna. Un punt indica una posició buida, una ’a’ indica una bassa d’aigua, una ’F’ indica una flor, i una ’C’ indica la posició inicial del cavall. Podeu suposar que hi haurà exactament una ’C’ dins del mapa.

Sortida:
Escriviu el nombre de flors accessibles des de la posició inicial del cavall, així com la distància mitjana, amb quatre decimals. Si no es pot arribar a cap flor, cal indicar-ho. Seguiu el format dels exemples.

Observació

Escriviu aquestes dues línies al principi del vostre main():
    cout.setf(ios::fixed);
    cout.precision(4);
