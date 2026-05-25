<?xml version="1.0" encoding="UTF-8"?>
<Algo>
    <description courant="FIN_SINON" texte=""/>
    <extension extnom="inactif"/>
    <fonction fctcode="" fctetat="inactif"/>
    <F2 F2para="" F2defaut="" F2etat="inactif" F2lignes=""/>
    <repere repcode="-10#10#-10#10#2#2" repetat="inactif"/>
    <param arrondiAuto="vrai" totalBoucles="5000000" epaisseurLigne="2" nbDecimales="8" totalAffichages="1000" epaisseurPoint="2" maxBoucle="500000"/>
    <item code="200#declarationfonctions" algoitem="FONCTIONS_UTILISEES"/>
    <item code="100#declarationsvariables" algoitem="VARIABLES">
        <item code="1#NOMBRE#N" algoitem="N EST_DU_TYPE NOMBRE"/>
        <item code="1#NOMBRE#I" algoitem="I EST_DU_TYPE NOMBRE"/>
        <item code="1#NOMBRE#Poids" algoitem="Poids EST_DU_TYPE NOMBRE"/>
        <item code="1#NOMBRE#cumul" algoitem="cumul EST_DU_TYPE NOMBRE"/>
    </item>
    <item code="101#debutalgo" algoitem="DEBUT_ALGORITHME">
        <item code="5#cumul#0#pasliste" algoitem="cumul PREND_LA_VALEUR 0"/>
        <item code="4#entrez le nombre de passager#0" algoitem="AFFICHER &quot;entrez le nombre de passager&quot;"/>
        <item code="2#N#pasliste" algoitem="LIRE N"/>
        <item code="5#I#1#pasliste" algoitem="I PREND_LA_VALEUR 1"/>
        <item code="15#I&lt;=N" algoitem="TANT_QUE (I&lt;=N) FAIRE">
            <item code="16#debuttantque" algoitem="DEBUT_TANT_QUE"/>
            <item code="4#entrez le poids du passager en kg#0" algoitem="AFFICHER &quot;entrez le poids du passager en kg&quot;"/>
            <item code="2#Poids#pasliste" algoitem="LIRE Poids"/>
            <item code="5#cumul#cumul+Poids#pasliste" algoitem="cumul PREND_LA_VALEUR cumul+Poids"/>
            <item code="5#I#I+1#pasliste" algoitem="I PREND_LA_VALEUR I+1"/>
            <item code="17#fintantque" algoitem="FIN_TANT_QUE"/>
        </item>
        <item code="6#cumul>500" algoitem="SI (cumul>500) ALORS">
            <item code="7#debutsi" algoitem="DEBUT_SI"/>
            <item code="4#Alert stop#0" algoitem="AFFICHER &quot;Alert stop&quot;"/>
            <item code="8#finsi" algoitem="FIN_SI"/>
            <item code="9#sinon" algoitem="SINON">
                <item code="10#debutsinon" algoitem="DEBUT_SINON"/>
                <item code="4#vous pouvez y aller#0" algoitem="AFFICHER &quot;vous pouvez y aller&quot;"/>
                <item code="11#finsinon" algoitem="FIN_SINON"/>
            </item>
        </item>
    </item>
    <item code="102#finalgo" algoitem="FIN_ALGORITHME"/>
</Algo>
