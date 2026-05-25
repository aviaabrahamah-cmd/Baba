<?xml version="1.0" encoding="UTF-8"?>
<Algo>
    <description texte="" courant="SI (a==2) ALORS"/>
    <extension extnom="inactif"/>
    <fonction fctcode="" fctetat="inactif"/>
    <F2 F2defaut="" F2lignes="" F2etat="inactif" F2para=""/>
    <repere repcode="-10#10#-10#10#2#2" repetat="inactif"/>
    <param epaisseurPoint="2" totalAffichages="1000" maxBoucle="500000" totalBoucles="5000000" epaisseurLigne="2" nbDecimales="8" arrondiAuto="vrai"/>
    <item algoitem="FONCTIONS_UTILISEES" code="200#declarationfonctions"/>
    <item algoitem="VARIABLES" code="100#declarationsvariables">
        <item algoitem="a EST_DU_TYPE NOMBRE" code="1#NOMBRE#a"/>
        <item algoitem="b EST_DU_TYPE NOMBRE" code="1#NOMBRE#b"/>
        <item algoitem="i EST_DU_TYPE NOMBRE" code="1#NOMBRE#i"/>
        <item algoitem="c EST_DU_TYPE NOMBRE" code="1#NOMBRE#c"/>
    </item>
    <item algoitem="DEBUT_ALGORITHME" code="101#debutalgo">
        <item algoitem="AFFICHER &quot;choisissez entre 1 et 2&quot;" code="4#choisissez entre 1 et 2#1"/>
        <item algoitem="AFFICHER &quot;1: table de division&quot;" code="4#1: table de division#1"/>
        <item algoitem="AFFICHER &quot;2: table de multiplicatio^&quot;" code="4#2: table de multiplicatio^#1"/>
        <item algoitem="LIRE a" code="2#a#pasliste"/>
        <item algoitem="SI (a==1) ALORS" code="6#a==1">
            <item algoitem="DEBUT_SI" code="7#debutsi"/>
            <item algoitem="LIRE b" code="2#b#pasliste"/>
            <item algoitem="AFFICHER &quot;voici la table de division de &quot;" code="4#voici la table de division de #0"/>
            <item algoitem="AFFICHER b" code="3#b#1#pasliste"/>
            <item algoitem="POUR i ALLANT_DE 0 A 10" code="12#i#0#10">
                <item algoitem="DEBUT_POUR" code="13#debutpour"/>
                <item algoitem="c PREND_LA_VALEUR i/b" code="5#c#i/b#pasliste"/>
                <item algoitem="AFFICHER c" code="3#c#1#pasliste"/>
                <item algoitem="FIN_POUR" code="14#finpour"/>
            </item>
            <item algoitem="SI (a==2) ALORS" code="6#a==2">
                <item algoitem="DEBUT_SI" code="7#debutsi"/>
                <item algoitem="LIRE b" code="2#b#pasliste"/>
                <item algoitem="AFFICHER &quot;voici la table de multiplication de &quot;" code="4#voici la table de multiplication de #0"/>
                <item algoitem="AFFICHER b" code="3#b#1#pasliste"/>
                <item algoitem="POUR i ALLANT_DE 0 A 10" code="12#i#0#10">
                    <item algoitem="DEBUT_POUR" code="13#debutpour"/>
                    <item algoitem="c PREND_LA_VALEUR b*i" code="5#c#b*i#pasliste"/>
                    <item algoitem="AFFICHER c" code="3#c#1#pasliste"/>
                    <item algoitem="FIN_POUR" code="14#finpour"/>
                </item>
                <item algoitem="FIN_SI" code="8#finsi"/>
            </item>
            <item algoitem="FIN_SI" code="8#finsi"/>
            <item algoitem="SINON" code="9#sinon">
                <item algoitem="DEBUT_SINON" code="10#debutsinon"/>
                <item algoitem="AFFICHER &quot;mauvais choix&quot;" code="4#mauvais choix#0"/>
                <item algoitem="FIN_SINON" code="11#finsinon"/>
            </item>
        </item>
    </item>
    <item algoitem="FIN_ALGORITHME" code="102#finalgo"/>
</Algo>
