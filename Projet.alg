<?xml version="1.0" encoding="UTF-8"?>
<Algo>
    <description texte="" courant="FIN_POUR"/>
    <extension extnom="inactif"/>
    <fonction fctetat="inactif" fctcode=""/>
    <F2 F2etat="inactif" F2lignes="" F2defaut="" F2para=""/>
    <repere repcode="-10#10#-10#10#2#2" repetat="inactif"/>
    <param totalAffichages="1000" epaisseurPoint="2" arrondiAuto="vrai" epaisseurLigne="2" nbDecimales="8" totalBoucles="5000000" maxBoucle="500000"/>
    <item algoitem="FONCTIONS_UTILISEES" code="200#declarationfonctions"/>
    <item algoitem="VARIABLES" code="100#declarationsvariables">
        <item algoitem="n EST_DU_TYPE NOMBRE" code="1#NOMBRE#n"/>
        <item algoitem="i EST_DU_TYPE NOMBRE" code="1#NOMBRE#i"/>
        <item algoitem="j EST_DU_TYPE NOMBRE" code="1#NOMBRE#j"/>
        <item algoitem="k EST_DU_TYPE NOMBRE" code="1#NOMBRE#k"/>
        <item algoitem="somme EST_DU_TYPE NOMBRE" code="1#NOMBRE#somme"/>
        <item algoitem="e EST_DU_TYPE NOMBRE" code="1#NOMBRE#e"/>
        <item algoitem="moyenne EST_DU_TYPE NOMBRE" code="1#NOMBRE#moyenne"/>
        <item algoitem="sauve EST_DU_TYPE NOMBRE" code="1#NOMBRE#sauve"/>
        <item algoitem="max EST_DU_TYPE NOMBRE" code="1#NOMBRE#max"/>
        <item algoitem="min EST_DU_TYPE NOMBRE" code="1#NOMBRE#min"/>
        <item algoitem="note EST_DU_TYPE LISTE" code="1#LISTE#note"/>
        <item algoitem="rep EST_DU_TYPE LISTE" code="1#LISTE#rep"/>
        <item algoitem="kep EST_DU_TYPE LISTE" code="1#LISTE#kep"/>
    </item>
    <item algoitem="DEBUT_ALGORITHME" code="101#debutalgo">
        <item algoitem="AFFICHER &quot;entrer votre nombre de matière :&quot;" code="4#entrer votre nombre de matière :#0"/>
        <item algoitem="LIRE n" code="2#n#pasliste"/>
        <item algoitem="somme PREND_LA_VALEUR 0" code="5#somme#0#pasliste"/>
        <item algoitem="POUR i ALLANT_DE o A n" code="12#i#o#n">
            <item algoitem="DEBUT_POUR" code="13#debutpour"/>
            <item algoitem="TANT_QUE (i&lt;=n) FAIRE" code="15#i&lt;=n">
                <item algoitem="DEBUT_TANT_QUE" code="16#debuttantque"/>
                <item algoitem="AFFICHER &quot;entrer votre a chaque matière :&quot;" code="4#entrer votre a chaque matière :#0"/>
                <item algoitem="somme PREND_LA_VALEUR somme + note [i]" code="5#somme#somme + note [i]#pasliste"/>
                <item algoitem="FIN_TANT_QUE" code="17#fintantque"/>
            </item>
            <item algoitem="FIN_POUR" code="14#finpour"/>
        </item>
        <item algoitem="moyenne PREND_LA_VALEUR somme/n" code="5#moyenne#somme/n#pasliste"/>
        <item algoitem="POUR i ALLANT_DE 0 A n" code="12#i#0#n">
            <item algoitem="DEBUT_POUR" code="13#debutpour"/>
            <item algoitem="TANT_QUE (i&lt;n) FAIRE" code="15#i&lt;n">
                <item algoitem="DEBUT_TANT_QUE" code="16#debuttantque"/>
                <item algoitem="POUR j ALLANT_DE i+1 A n" code="12#j#i+1#n">
                    <item algoitem="DEBUT_POUR" code="13#debutpour"/>
                    <item algoitem="TANT_QUE (j&lt;n) FAIRE" code="15#j&lt;n">
                        <item algoitem="DEBUT_TANT_QUE" code="16#debuttantque"/>
                        <item algoitem="SI (note[i]&lt;note[j]) ALORS" code="6#note[i]&lt;note[j]">
                            <item algoitem="DEBUT_SI" code="7#debutsi"/>
                            <item algoitem="sauve PREND_LA_VALEUR note[i]" code="5#sauve#note[i]#pasliste"/>
                            <item algoitem="note[i] PREND_LA_VALEUR note[j]" code="5#note#note[j]#i"/>
                            <item algoitem="note[j] PREND_LA_VALEUR sauve" code="5#note#sauve#j"/>
                            <item algoitem="FIN_SI" code="8#finsi"/>
                        </item>
                        <item algoitem="FIN_TANT_QUE" code="17#fintantque"/>
                    </item>
                    <item algoitem="FIN_POUR" code="14#finpour"/>
                </item>
                <item algoitem="FIN_TANT_QUE" code="17#fintantque"/>
            </item>
            <item algoitem="FIN_POUR" code="14#finpour"/>
        </item>
        <item algoitem="min PREND_LA_VALEUR note[0]" code="5#min#note[0]#pasliste"/>
        <item algoitem="max PREND_LA_VALEUR note[n-1]" code="5#max#note[n-1]#pasliste"/>
        <item algoitem="AFFICHER &quot;la somme de votre note : &quot;" code="4#la somme de votre note : #0"/>
        <item algoitem="AFFICHER &quot;votre moyenne de matière n est:&quot;" code="4#votre moyenne de matière n est:#0"/>
        <item algoitem="AFFICHER &quot;votre note maximal dans votre matière:&quot;" code="4#votre note maximal dans votre matière:#0"/>
        <item algoitem="AFFICHER &quot;votre note minimum dans votre matière : &quot;" code="4#votre note minimum dans votre matière : #0"/>
        <item algoitem="POUR i ALLANT_DE 0 A n" code="12#i#0#n">
            <item algoitem="DEBUT_POUR" code="13#debutpour"/>
            <item algoitem="TANT_QUE (i&lt;n) FAIRE" code="15#i&lt;n">
                <item algoitem="DEBUT_TANT_QUE" code="16#debuttantque"/>
                <item algoitem="SI (note[i]==max) ALORS" code="6#note[i]==max">
                    <item algoitem="DEBUT_SI" code="7#debutsi"/>
                    <item algoitem="rep[e] PREND_LA_VALEUR i" code="5#rep#i#e"/>
                    <item algoitem="e PREND_LA_VALEUR e+1" code="5#e#e+1#pasliste"/>
                    <item algoitem="FIN_SI" code="8#finsi"/>
                </item>
                <item algoitem="FIN_TANT_QUE" code="17#fintantque"/>
            </item>
            <item algoitem="FIN_POUR" code="14#finpour"/>
        </item>
    </item>
    <item algoitem="FIN_ALGORITHME" code="102#finalgo"/>
</Algo>
