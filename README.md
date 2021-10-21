# WestWorldWithMessaging - Devoir 2

#-----Noms et codes permanents des étudiants-----#
 - Rémi ESPIE - ESPR01020004
 - Murielle MOBOU TACHAGO - MOBM18550004
 - Florian FRITZ -  FRIF04109909

#-----Fonctionnalités ajoutées-----#
 - Classe d’Agent-Poursuiveur qui combine deux forces de mouvements basées sur les deux techniques vu en cours
 - Classe  d’agent  leader  qui  se  déplace  d’une  manière  aléatoire  moyennant l’algorithme d’itinérance (wandering)
 - Groupe  de  20  agents-poursuiveurs derrière un seul agent leader
 - Agent-leader  dont  le  comportement  n’est  plus  aléatoire  mais  contrôlé  par  un joueur-humain avec les touches WASD et la touche Q pour stoper le leader sur place
 - Différents  choix  de  paramètres  de contrôle du jeu (leader IA, leader humain, offset) disponible via une interface graphique
 - Différentes couleurs pour identifier les types d'agents

#-----Problèmes non résolues-----#
 Actuellement pour repasser du mode Humain a un mode de poursuite en queue il faut utiliser la touche R afin de "reset" le gameworld. 
 Pour avoir le Wander et le Flocking en ligne il faut donc ne jamais passer par Humain ou devoir reset avec R.
 Cependant cela laisse aussi le choix de pouvoir utiliser le Wander et le Flocking en mode protecteur (en cercle autour du leader)
 Pour cela il faut d'abord passer par Humain puis choisir Wander ou Flocking dans le menu.
 
 
