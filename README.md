# PSU_navy_2019

Projet 1ère année Epitech module PSU

Le Navy a pour but de reproduire le jeu Bataille Navale entre deux processus grâce aux signaux.

Projet mis à la norme d'Epitech, passant 100% des tests.


Communication par décalage de bit, checksum et ping-pong.

Compilation par Makefile. (make all)
<h1></h1>
Exemple de map dans le fichier pos.<br>

Usage:<br>
./navy [pid] map

Exemple:<br>
./navy pos<br>
./navy 3241 pos

# Example
<h3>Premier navy</h3>
<code>my_pid: 31567<br>
waiting for enemy connexion...<br>
enemy connected<br>

my positions:
 |A B C D E F G H<br>
-+---------------<br>
1|. . 2 . . . . .<br>
2|. . 2 . . . . .<br>
3|. . . . . . . .<br>
4|. . . 3 3 3 . .<br>
5|. 4 . . . . . .<br>
6|. 4 . . . . . .<br>
7|. 4 . 5 5 5 5 5<br>
8|. 4 . . . . . .<br>

enemy's positions:<br>
 |A B C D E F G H<br>
-+---------------<br>
1|. . . . . . . .<br>
2|. . . . . . . .<br>
3|. . . . . . . .<br>
4|. . . . . . . .<br>
5|. . . . . . . .<br>
6|. . . . . . . .<br>
7|. . . . . . . .<br>
8|. . . . . . . .<br>

attack: C1<br>
C1: missed<br>

waiting for enemy's attack...<br>
C1: hit<br>

my positions:<br>
 |A B C D E F G H<br>
-+---------------<br>
1|. . x . . . . .<br>
2|. . 2 . . . . .<br>
3|. . . . . . . .<br>
4|. . . 3 3 3 . .<br>
5|. 4 . . . . . .<br>
6|. 4 . . . . . .<br>
7|. 4 . 5 5 5 5 5<br>
8|. 4 . . . . . .<br>

enemy's positions:<br>
 |A B C D E F G H<br>
-+---------------<br>
1|. . o . . . . .<br>
2|. . . . . . . .<br>
3|. . . . . . . .<br>
4|. . . . . . . .<br>
5|. . . . . . . .<br>
6|. . . . . . . .<br>
7|. . . . . . . .<br>
8|. . . . . . . .<br>

attack: <br>
[...]<br></code>
