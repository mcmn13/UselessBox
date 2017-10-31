#Création d'une Useless Box (Documentation)
![Useless Box](/Photos/00couverture.jpg)
# Présentation et objectif pédagogique

Création d'une Useless Box en bois à base d'Arduino.

Objectif pédagogique : 	- Découvrir les principes de l'électronique<br>
			- Savoir utiliser des outils d'électronique dans le respect des règles de sécurité
---
# Pré-requis
## Matériel (total de 42,83€)
-1 Arduino Uno
21€	 	[RS-Composant](http://fr.rs-online.com/web/p/kits-de-developpement-pour-processeurs-et-microcontroleurs/7697409/)

-1 Servomoteur
12,27€ 		[RS-Composant](http://fr.rs-online.com/web/p/servomoteurs/7813058/)

-1 Bouton Toggle Switch
1,86€		[RS-Composant](http://fr.rs-online.com/web/p/interrupteurs-a-levier/4480911/)

-1 Résistance 320 omh

-1 Connecteur 9V
1,68€		[ebay](http://www.ebay.fr/itm/1-2-3-4-6-8-x-AA-AAA-23A-9V-Battery-Holder-Snap-On-Connector-Enclosed-Box-Switch/180814661762?hash=item2a1964c882:m:mhR6vszwxemlv3mGgcG-pvQ)

-6 Piles AAA
2,96€ les 12	[RS-Composant](http://fr.rs-online.com/web/p/piles-aaa/7442209/)

-Fils électriques isolés
1,20€ les 65 	[ebay](http://www.ebay.fr/itm/65pcs-Male-to-Male-Flexible-Solderless-Breadboard-Jumper-Cable-Wires-For-Arduino/301227825820?hash=item462293da9c:g:2tIAAOSwubRXHx96)

-1 autre bouton toggle switch pour faire la mise sous-tension
1,86€	[RS-Composant](http://fr.rs-online.com/web/p/interrupteurs-a-levier/4480911/)
---
## Matériaux
-Planche de Bois 325x250x3mm<br>
-Fil d'étain
## Outils
-Découpeuse laser<br>
-Fer à souder<br>
-Pistolet à colle<br>
-Colle type super glue<br>
-Cable USB PC/Arduino
## Logiciel
-Arduino<br>
-Inkscape<br>
-JobControl (découpeuse laser)
---
# Création d'une Useless Box
## Etape 1 : Préparation de la boite
Munissez-vous d'une plaque de bois 325x300mm d'épaisseur 3mm<br>
Préparez la découpeuse laser puis, lancer la découpe à l'aide du fichier [Plan de coupe](/Ressources/UselessBox_plan-modifié.svg/)<br>
Assemblez et collez (super glue ou pistolet-à-colle) la base à ainsi que le côté bas et droit de la boite<br> 
![Useless Box en assemblage](/Photos/20.jpg)
Ne collez pas le couvercle, nous le fixerons après avoir soudé l'interrupteur ;) )<br>
Nous allons maintenant passer au montage la partie éléctronique<br>
---
## Etape 2 : Montage et préparation de l'Arduino
Référez vous au ![Fritzing](/Fritzing/useless_box.fzz) "Useless Box"


Les composants à souder : 	-Connecteur 9V<br>
				-Servomoteur<br>
				-Résistance<br>
				-Boutons toggle switch

N'oubliez pas de téléverser et tester votre circuit avant de passer à l'assemblage !
---
## Etape 3 :Assemblage du circuit dans la boite

Placez l'interrupteur à son emplacement prévu sur la boite.<br>
Vérifiez le sens "on-off" de l'interrupteur ; Le servomoteur doit s'activer de l'activation (off) jusqu'à la désactivation (off)<br>
Une fois le sens du bouton toggle switch vérifié, fixez-le à l'aide de super glue<br>
Avec le pistolet-à-colle, fixez l'adaptateur 9V. N'oubliez pas d'inclure les piles !<br>
![Vue de face](/Photos/30.jpg)
Pour positionner correction le servomoteur, faite un essai avant de le fixer<br>
Fixez le "Finger" (partie en bois qui vient appuyer l'interrupteur) sur le servomoteur<br>
Fixez le support en bois sur la base de la boite à l'aide de super glue<br>
Fixez le servomoteur en le collant sur son support et contre la paroi<br>
![Vue de côté](/Photos/31.jpg)
Fixez l'Arduino sur la base de la carte à l'aide du pistolet-à-colle<br>
Insérez et fixez l'interrupteur de mise sous-tension à son emplacement prévu (tranche de la boite)<br>
Fixez le couvercle contenant l'interrupteur à la boite<br>

Je vous conseil de ne pas fixer les 2 autres côtés : l'un permettant l'accès aux piles pour un changement, l'autre permettant l'accès au port USB de l'Arduino.
---
# Pour aller plus loin
N'hésitez pas à rajouter une LED, un second servomoteur, améliorer le code (mise en place de scénario), un capteur de proximité, des roues, etc...
---
# Bibliographie
[Plan de coupe initiale par le FabLab de Leuven](https://fablab-leuven.be/?q=node/1648)
