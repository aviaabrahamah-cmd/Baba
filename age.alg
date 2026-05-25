<?xml version="1.0" encoding="UTF-8"?>
<Algo>
    <description courant="LIRE N" texte=""/>
    <extension extnom="inactif"/>
    <fonction fctcode="" fctetat="inactif"/>
    <F2 F2para="" F2defaut="" F2etat="inactif" F2lignes=""/>
    <repere repcode="-10#10#-10#10#2#2" repetat="inactif"/>
    <param arrondiAuto="vrai" totalBoucles="5000000" epaisseurLigne="2" nbDecimales="8" totalAffichages="1000" epaisseurPoint="2" maxBoucle="500000"/>
    <item code="200#declarationfonctions" algoitem="FONCTIONS_UTILISEES"/>
    <item code="100#declarationsvariables" algoitem="VARIABLES">
        <item code="1#NOMBRE#age" algoitem="age EST_DU_TYPE NOMBRE"/>
        <item code="1#NOMBRE#95age" algoitem="95age EST_DU_TYPE NOMBRE"/>
        <item code="1#NOMBRE#I" algoitem="I EST_DU_TYPE NOMBRE"/>
        <item code="1#NOMBRE#N" algoitem="N EST_DU_TYPE NOMBRE"/>
    </item>
    <item code="101#debutalgo" algoitem="DEBUT_ALGORITHME">
        <item code="5#95age#0#pasliste" algoitem="95age PREND_LA_VALEUR 0"/>
        <item code="4#entrez le nombre de passager#0" algoitem="AFFICHER &quot;entrez le nombre de passager&quot;"/>
        <item code="2#N#pasliste" algoitem="LIRE N"/>
        <item code="5#I#1#pasliste" algoitem="I PREND_LA_VALEUR 1"/>
        <item code="15#I&lt;=N" algoitem="TANT_QUE (I&lt;=N) FAIRE">
            <item code="16#debuttantque" algoitem="DEBUT_TANT_QUE"/>
            <item code="4#entrez l age du passager#0" algoitem="AFFICHER &quot;entrez l age du passager&quot;"/>
            <item code="2#age#pasliste" algoitem="LIRE age"/>
            <item code="6#age>=95" algoitem="SI (age>=95) ALORS">
                <item code="7#debutsi" algoitem="DEBUT_SI"/>
                <item code="5#95age#95age+1#pasliste" algoitem="95age PREND_LA_VALEUR 95age+1"/>
                <item code="8#finsi" algoitem="FIN_SI"/>
            </item>
            <item code="5#I#I+1#pasliste" algoitem="I PREND_LA_VALEUR I+1"/>
            <item code="17#fintantque" algoitem="FIN_TANT_QUE"/>
        </item>
        <item code="6#95age>5" algoitem="SI (95age>5) ALORS">
            <item code="7#debutsi" algoitem="DEBUT_SI"/>
            <item code="4#Alert#0" algoitem="AFFICHER &quot;Alert&quot;"/>
            <item code="8#finsi" algoitem="FIN_SI"/>
        </item>
    </item>
    <item code="102#finalgo" algoitem="FIN_ALGORITHME"/>
</Algo>
