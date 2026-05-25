<?xml version="1.0" encoding="UTF-8"?>
<Algo>
    <description courant="AFFICHER &quot;= &quot;" texte="table de multiplication&#xa;"/>
    <extension extnom="inactif"/>
    <fonction fctetat="inactif" fctcode=""/>
    <F2 F2para="" F2etat="inactif" F2lignes="" F2defaut=""/>
    <repere repetat="inactif" repcode="-10#10#-10#10#2#2"/>
    <param maxBoucle="500000" epaisseurLigne="2" arrondiAuto="vrai" nbDecimales="8" totalAffichages="1000" epaisseurPoint="2" totalBoucles="5000000"/>
    <item algoitem="FONCTIONS_UTILISEES" code="200#declarationfonctions"/>
    <item algoitem="VARIABLES" code="100#declarationsvariables">
        <item algoitem="N EST_DU_TYPE NOMBRE" code="1#NOMBRE#N"/>
        <item algoitem="i EST_DU_TYPE NOMBRE" code="1#NOMBRE#i"/>
        <item algoitem="b EST_DU_TYPE NOMBRE" code="1#NOMBRE#b"/>
    </item>
    <item algoitem="DEBUT_ALGORITHME" code="101#debutalgo">
        <item algoitem="LIRE N" code="2#N#pasliste"/>
        <item algoitem="SI (N>0) ALORS" code="6#N>0">
            <item algoitem="DEBUT_SI" code="7#debutsi"/>
            <item algoitem="POUR i ALLANT_DE 1 A 10" code="12#i#1#10">
                <item algoitem="DEBUT_POUR" code="13#debutpour"/>
                <item algoitem="b PREND_LA_VALEUR N*i" code="5#b#N*i#pasliste"/>
                <item algoitem="AFFICHER N" code="3#N#0#pasliste"/>
                <item algoitem="AFFICHER &quot;*&quot;" code="4#*#0"/>
                <item algoitem="AFFICHER i" code="3#i#0#pasliste"/>
                <item algoitem="AFFICHER &quot;= &quot;" code="4#= #0"/>
                <item algoitem="AFFICHER b" code="3#b#1#pasliste"/>
                <item algoitem="FIN_POUR" code="14#finpour"/>
            </item>
            <item algoitem="FIN_SI" code="8#finsi"/>
            <item algoitem="SINON" code="9#sinon">
                <item algoitem="DEBUT_SINON" code="10#debutsinon"/>
                <item algoitem="AFFICHER &quot;nombre invalide&quot;" code="4#nombre invalide#1"/>
                <item algoitem="FIN_SINON" code="11#finsinon"/>
            </item>
        </item>
    </item>
    <item algoitem="FIN_ALGORITHME" code="102#finalgo"/>
</Algo>
