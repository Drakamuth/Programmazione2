/*Si implementi un programma che rappresenti una gerarchia di veicoli.
Ogni veicolo ha un numero di ruore, un tipo di carburante, una motorizzazione, 
una velocità massima,
una marca ed un prezzo.
Tra i veicoli distinguiamo motocicli, auto, camion, mezzi speciali.

Si simuli una gara tra 10 veicoli di tipo diverso, riportando posizioni iniziali, sorpassi e
classifica finale.*/

#ifndef VEICOLO_H //verificare che l'header dichiarato qui non sia definito
#define VEICOLO_H //lo definiamo

#include <iostream>

class Veicolo {
	protected:
		int numeroRuote;
		int velocitaMassima;
		int velocita;
		double prezzo;
		std::string marca;
		std::string carburante;
		std::string motorizzazione;
	
	public:
		Veicolo(int numeroRuote, int velocitaMassima, double prezzo, std::string marca, std::string carburante, std::string motorizzazione) : numeroRuote(numeroRuote), velocitaMassima(velocitaMassima), velocita(0), prezzo(prezzo), marca(marca), carburante(carburante), motorizzazione(motorizzazione) {}
		
		
		int getNumeroRuote() {
			return numeroRuote;
		}
		
		int getVelocitaMassima() {
			return velocitaMassima;
		}
		
		int getVelocita() {
			return velocita;
		}
		
		double getPrezzo() {
			return prezzo;
		}
		
		std::string getMarca() {
			return marca;
		}
		
		std::string getCarburante() {
			return carburante;
		}
		
		std::string getMotorizzazione() {
			return motorizzazione;
		}
		
		void setNumeroRuote(int n) {
			numeroRuote = n;
		}
		
		void setVelocitaMassima(int n) {
			velocitaMassima = n;
		}
				
		void setPrezzo(double d) {
			prezzo = d;
		}
		
		void setMarca(std::string s) {
			marca = s;
		}
		
		void setCarburante(std::string s) {
			carburante = s;
		}
		
		void setMotorizzazione(std::string s) {
			motorizzazione = s;
		}
		
		void accelera() {
			if(velocita < velocitaMassima)
				velocita++;
		}
		
		void decelera() {
			if(velocita > 0) 
				velocita--;
		}
		
		virtual std::string toString() const = 0;
		
		
		friend std::ostream& operator<<(std::ostream& out, const Veicolo& v) {
			out << v.toString();
			return out;
		}
		
		void operator=(const Veicolo& v) {
			this->numeroRuote = v.numeroRuote;
			this->velocitaMassima = v.velocitaMassima;
			this->motorizzazione = v.motorizzazione;
			this->carburante = v.carburante;
			this->marca = v.marca;
			this->prezzo = v.prezzo;
		}
};

#endif
