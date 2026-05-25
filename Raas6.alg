<?xml version="1.0" encoding="UTF-8"?>
<Algo>
    <description courant="AFFICHER &quot; cm&quot;" texte="perimetre d'un rectangle&#xa;"/>
    <extension extnom="inactif"/>
    <fonction fctcode="" fctetat="inactif"/>
    <F2 F2defaut="" F2etat="inactif" F2para="" F2lignes=""/>
    <repere repcode="-10#10#-10#10#2#2" repetat="inactif"/>
    <param totalAffichages="1000" epaisseurLigne="2" totalBoucles="5000000" maxBoucle="500000" nbDecimales="8" arrondiAuto="vrai" epaisseurPoint="2"/>
    <item algoitem="FONCTIONS_UTILISEES" code="200#declarationfonctions"/>
    <item algoitem="VARIABLES" code="100#declarationsvariables">
        <item algoitem="a EST_DU_TYPE NOMBRE" code="1#NOMBRE#a"/>
        <item algoitem="b EST_DU_TYPE NOMBRE" code="1#NOMBRE#b"/>
        <item algoitem="p EST_DU_TYPE NOMBRE" code="1#NOMBRE#p"/>
    </item>
    <item algoitem="DEBUT_ALGORITHME" code="101#debutalgo">
        <item algoitem="AFFICHER &quot;entrer la longuer&quot;" code="4#entrer la longuer#0"/>
        <item algoitem="LIRE a" code="2#a#pasliste"/>
        <item algoitem="AFFICHER &quot;entrer la largeur &quot;" code="4#entrer la largeur #0"/>
        <item algoitem="LIRE b" code="2#b#pasliste"/>
        <item algoitem="p PREND_LA_VALEUR (a+b)*2" code="5#p#(a+b)*2#pasliste"/>
        <item algoitem="AFFICHER &quot;donc perimetre = &quot;" code="4#donc perimetre = #0"/>
        <item algoitem="AFFICHER p" code="3#p#0#pasliste"/>
        <item algoitem="AFFICHER &quot; cm&quot;" code="4# cm#0"/>
    </item>
    <item algoitem="FIN_ALGORITHME" code="102#finalgo"/>
</Algo>
