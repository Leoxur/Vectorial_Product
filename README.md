Scalar_Product
==============

Accetti come argomento due vettori da minimo 1 e massimo 10 elementi ciascuno. 
I due vettori hanno la stessa lunghezza.
Ogni elemento di un vettore è un numero intero.

I vettori sono passati al programma con la sintassi:
                "{NUMERO1, NUMERO2, NUMERO3}"

Nota: le virgolette servono a rendere tutta la stringa come un unico argomento, altrimenti avremmo:
                argv[1] = {NUMERO1,  ed argv[2] = NUMERO2, ecc.

Invece con le virgolette abbiamo:
                argv[1] è "{NUMERO1, NUMERO2, NUMERO3}

ci possono essere un numero di spazi arbitrari prima o dopo le parentesi graffe e intorno alle virgole.
Esempio passaggio di vettori al programma:

                ./main "{ 1, 21 ,3 ,4}" "    {4, 0    10,             4}"


Il programma deve eseguire il prodotto scalare tra i due vettori.

Nell’esempio di prima:
                1*4 + 21 * 0 + 3*10 + 4*4 = 50

Attenzione: Il main deve ritornare il risultato* (oltre a fare la printf del risultato)

Nell’esempio di prima:

      return 50

Quindi, terminato il programma, se lanciamo da shell il comando per farci stampare l’ultimo return code:
echo $?

deve apparire il valore 50

Nota: gli exit code sono di un byte, quindi return 300 corrisponde a 44 a causa dell’overflow (300%256 = 44).
http://tldp.org/LDP/abs/html/exitcodes.html
