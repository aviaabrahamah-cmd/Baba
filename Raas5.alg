<?xml version="1.0" encoding="UTF-8"?>
<Algo>
    <description courant="AFFICHER &quot;entrer le temps  en (S)&quot;" texte="calcul vitesse "/>
    <extension extnom="inactif"/>
    <fonction fctcode="" fctetat="inactif"/>
    <F2 F2defaut="" F2etat="inactif" F2lignes="" F2para=""/>
    <repere repcode="-10#10#-10#10#2#2" repetat="inactif"/>
    <param maxBoucle="500000" arrondiAuto="vrai" totalBoucles="5000000" epaisseurPoint="2" nbDecimales="8" totalAffichages="1000" epaisseurLigne="2"/>
    <item code="200#declarationfonctions" algoitem="FONCTIONS_UTILISEES"/>
    <item code="100#declarationsvariables" algoitem="VARIABLES">
        <item code="1#NOMBRE#d" algoitem="d EST_DU_TYPE NOMBRE"/>
        <item code="1#NOMBRE#v" algoitem="v EST_DU_TYPE NOMBRE"/>
        <item code="1#NOMBRE#t" algoitem="t EST_DU_TYPE NOMBRE"/>
    </item>
    <item code="101#debutalgo" algoitem="DEBUT_ALGORITHME">
        <item code="4#entrer la distance en (m)#0" algoitem="AFFICHER &quot;entrer la distance en (m)&quot;"/>
        <item code="2#d#pasliste" algoitem="LIRE d"/>
        <item code="4#entrer le temps  en (S)#0" algoitem="AFFICHER &quot;entrer le temps  en (S)&quot;"/>
        <item code="2#t#pasliste" algoitem="LIRE t"/>
        <item code="5#v#d/t#pasliste" algoitem="v PREND_LA_VALEUR d/t"/>
        <item code="4#donc V= #0" algoitem="AFFICHER &quot;donc V= &quot;"/>
        <item code="3#v#0#pasliste" algoitem="AFFICHER v"/>
        <item code="4# m/s#0" algoitem="AFFICHER &quot; m/s&quot;"/>
    </item>
    <item code="102#finalgo" algoitem="FIN_ALGORITHME"/>
</Algo>
