02-Far lampeggiare un LED
=====

Occorrente
-----

- 1 Breadboard (BB)
- 1 LED
- 1 Resistenza da 1kOhm (marrone, nero, rosso)
- 4 fili jumper

Setup Hardware
-----

1. Scollegare il cavo USB da Arduino;
2. Collegare il PIN I/O DIGITALE 8 di Arduino al foro I-12 della BB.
3. Collegare la resistenza ai fori H-4 e H-12 della BB.
4. Collegare il catodo del LED (terminale più corto) al foro I-2 della BB.
5. Collegare l'anodo del LED (terminale più lungo) al foro I-4 della BB.
7. Collegare la porta GND con la sezione - della BB.
8. Collegare J-2 con la sezione - della BB.
9. Collegare la porta USB di Arduino.

Una volta collegato Arduino all'alimentazione, caricare nell'IDE lo sketch
androtut-02.sketch ed avviarlo.

Risultato
----

Il comando digitalWrite(8, HIGH); setta il PIN I/O 8 di Arduino al valore di
5V. Il comando digitalWrite(8, LOW); setta il PIN I/O 8 al valore 0V.
Il comando delay(1000); mette in pausa l'esecuzione su Arduino per 1000ms,
ovvero 1 secondo. Poiché ci troviamo nella funzione loop() il codice viene
ripetuto all'infinito.
