#include "types.h"
#include "language.h"
u8 attack_names[][13] = {
	LANGDEP(PSTRING("-"), PSTRING("-")),
	LANGDEP(PSTRING("Pfund"), PSTRING("Pound")),
	LANGDEP(PSTRING("Karateschlag"), PSTRING("Karate Chop")),
	LANGDEP(PSTRING("Duplexhieb"), PSTRING("Doubleslap")),
	LANGDEP(PSTRING("Kometenhieb"), PSTRING("Comet Punch")),
	LANGDEP(PSTRING("Megahieb"), PSTRING("Mega Punch")),
	LANGDEP(PSTRING("Zahltag"), PSTRING("Pay Day")),
	LANGDEP(PSTRING("Feuerschlag"), PSTRING("Fire Punch")),
	LANGDEP(PSTRING("Eishieb"), PSTRING("Ice Punch")),
	LANGDEP(PSTRING("Donnerschlag"), PSTRING("Thunderpunch")),
	LANGDEP(PSTRING("Kratzer"), PSTRING("Scratch")),
	LANGDEP(PSTRING("Klammer"), PSTRING("Vicegrip")),
	LANGDEP(PSTRING("Guillotine"), PSTRING("Guillotine")),
	LANGDEP(PSTRING("Klingensturm"), PSTRING("Razor Wind")),
	LANGDEP(PSTRING("Schwerttanz"), PSTRING("Swords Dance")),
	LANGDEP(PSTRING("Zerschneider"), PSTRING("Cut")),
	LANGDEP(PSTRING("Windstoß"), PSTRING("Gust")),
	LANGDEP(PSTRING("Flügelschlag"), PSTRING("Wing Attack")),
	LANGDEP(PSTRING("Wirbelwind"), PSTRING("Whirlwind")),
	LANGDEP(PSTRING("Fliegen"), PSTRING("Fly")),
	LANGDEP(PSTRING("Klammergriff"), PSTRING("Bind")),
	LANGDEP(PSTRING("Slam"), PSTRING("Slam")),
	LANGDEP(PSTRING("Rankenhieb"), PSTRING("Vine Whip")),
	LANGDEP(PSTRING("Stampfer"), PSTRING("Stomp")),
	LANGDEP(PSTRING("Doppelkick"), PSTRING("Double Kick")),
	LANGDEP(PSTRING("Megakick"), PSTRING("Mega Kick")),
	LANGDEP(PSTRING("Sprungkick"), PSTRING("Jump Kick")),
	LANGDEP(PSTRING("Fegekick"), PSTRING("Rolling Kick")),
	LANGDEP(PSTRING("Sandwirbel"), PSTRING("Sand-attack")),
	LANGDEP(PSTRING("Kopfnuss"), PSTRING("Headbutt")),
	LANGDEP(PSTRING("Hornattacke"), PSTRING("Horn Attack")),
	LANGDEP(PSTRING("Furienschlag"), PSTRING("Fury Attack")),
	LANGDEP(PSTRING("Hornbohrer"), PSTRING("Horn Drill")),
	LANGDEP(PSTRING("Tackle"), PSTRING("Tackle")),
	LANGDEP(PSTRING("Bodyslam"), PSTRING("Body Slam")),
	LANGDEP(PSTRING("Wickel"), PSTRING("Wrap")),
	LANGDEP(PSTRING("Bodychek"), PSTRING("Take Down")),
	LANGDEP(PSTRING("Fuchtler"), PSTRING("Thrash")),
	LANGDEP(PSTRING("Risikotackle"), PSTRING("Double-edge")),
	LANGDEP(PSTRING("Rutenschlag"), PSTRING("Tail Whip")),
	LANGDEP(PSTRING("Giftstachel"), PSTRING("Poison Sting")),
	LANGDEP(PSTRING("Duonadel"), PSTRING("Twineedle")),
	LANGDEP(PSTRING("Nadelrakete"), PSTRING("Pin Missile")),
	LANGDEP(PSTRING("Silberblick"), PSTRING("Leer")),
	LANGDEP(PSTRING("Biss"), PSTRING("Bite")),
	LANGDEP(PSTRING("Heuler"), PSTRING("Growl")),
	LANGDEP(PSTRING("Brüller"), PSTRING("Roar")),
	LANGDEP(PSTRING("Gesang"), PSTRING("Sing")),
	LANGDEP(PSTRING("Superschall"), PSTRING("Supersonic")),
	LANGDEP(PSTRING("Ultraschall"), PSTRING("Sonicboom")),
	LANGDEP(PSTRING("Aussetzer"), PSTRING("Disable")),
	LANGDEP(PSTRING("Säure"), PSTRING("Acid")),
	LANGDEP(PSTRING("Glut"), PSTRING("Ember")),
	LANGDEP(PSTRING("Flammenwurf"), PSTRING("Flamethrower")),
	LANGDEP(PSTRING("Weißnebel"), PSTRING("Mist")),
	LANGDEP(PSTRING("Aquaknarre"), PSTRING("Water Gun")),
	LANGDEP(PSTRING("Hydropumpe"), PSTRING("Hydro Pump")),
	LANGDEP(PSTRING("Surfer"), PSTRING("Surf")),
	LANGDEP(PSTRING("Eisstrahl"), PSTRING("Ice Beam")),
	LANGDEP(PSTRING("Blizzard"), PSTRING("Blizzard")),
	LANGDEP(PSTRING("Psystrahl"), PSTRING("Psybeam")),
	LANGDEP(PSTRING("Blubbstrahl"), PSTRING("Bubblebeam")),
	LANGDEP(PSTRING("Aurorastrahl"), PSTRING("Aurora Beam")),
	LANGDEP(PSTRING("Hyperstrahl"), PSTRING("Hyper Beam")),
	LANGDEP(PSTRING("Schnabel"), PSTRING("Peck")),
	LANGDEP(PSTRING("Bohrschnabel"), PSTRING("Drill Peck")),
	LANGDEP(PSTRING("überroller"), PSTRING("Submission")),
	LANGDEP(PSTRING("Fußkick"), PSTRING("Low Kick")),
	LANGDEP(PSTRING("Konter"), PSTRING("Counter")),
	LANGDEP(PSTRING("Geowurf"), PSTRING("Seismic Toss")),
	LANGDEP(PSTRING("Stärke"), PSTRING("Strength")),
	LANGDEP(PSTRING("Absorber"), PSTRING("Absorb")),
	LANGDEP(PSTRING("Megasauger"), PSTRING("Mega Drain")),
	LANGDEP(PSTRING("Egelsamen"), PSTRING("Leech Seed")),
	LANGDEP(PSTRING("Wachstum"), PSTRING("Growth")),
	LANGDEP(PSTRING("Rasierblatt"), PSTRING("Razor Leaf")),
	LANGDEP(PSTRING("Solarstrahl"), PSTRING("Solarbeam")),
	LANGDEP(PSTRING("Giftpuder"), PSTRING("Poisonpowder")),
	LANGDEP(PSTRING("Stachelspore"), PSTRING("Stun Spore")),
	LANGDEP(PSTRING("Schlafpuder"), PSTRING("Sleep Powder")),
	LANGDEP(PSTRING("Blättertanz"), PSTRING("Petal Dance")),
	LANGDEP(PSTRING("Fadenschuss"), PSTRING("String Shot")),
	LANGDEP(PSTRING("Drachenwut"), PSTRING("Dragon Rage")),
	LANGDEP(PSTRING("Feuerwirbel"), PSTRING("Fire Spin")),
	LANGDEP(PSTRING("Donnerschock"), PSTRING("Thundershock")),
	LANGDEP(PSTRING("Donnerblitz"), PSTRING("Thunderbolt")),
	LANGDEP(PSTRING("Donnerwelle"), PSTRING("Thunder Wave")),
	LANGDEP(PSTRING("Donner"), PSTRING("Thunder")),
	LANGDEP(PSTRING("Steinwurf"), PSTRING("Rock Throw")),
	LANGDEP(PSTRING("Erdbeben"), PSTRING("Earthquake")),
	LANGDEP(PSTRING("Geofissur"), PSTRING("Fissure")),
	LANGDEP(PSTRING("Schaufler"), PSTRING("Dig")),
	LANGDEP(PSTRING("Toxin"), PSTRING("Toxic")),
	LANGDEP(PSTRING("Konfusion"), PSTRING("Confusion")),
	LANGDEP(PSTRING("Psychokinese"), PSTRING("Psychic")),
	LANGDEP(PSTRING("Hypnose"), PSTRING("Hypnosis")),
	LANGDEP(PSTRING("Meditation"), PSTRING("Meditate")),
	LANGDEP(PSTRING("Agilität"), PSTRING("Agility")),
	LANGDEP(PSTRING("Ruckzuckhieb"), PSTRING("Quick Attack")),
	LANGDEP(PSTRING("Raserei"), PSTRING("Rage")),
	LANGDEP(PSTRING("Teleport"), PSTRING("Teleport")),
	LANGDEP(PSTRING("Nachtnebel"), PSTRING("Night Shade")),
	LANGDEP(PSTRING("Mimikry"), PSTRING("Mimic")),
	LANGDEP(PSTRING("Kreideschrei"), PSTRING("Screech")),
	LANGDEP(PSTRING("Doppelteam"), PSTRING("Double Team")),
	LANGDEP(PSTRING("Genesung"), PSTRING("Recover")),
	LANGDEP(PSTRING("Härtner"), PSTRING("Harden")),
	LANGDEP(PSTRING("Komprimator"), PSTRING("Minimize")),
	LANGDEP(PSTRING("Rauchwolke"), PSTRING("Smokescreen")),
	LANGDEP(PSTRING("Konfustrahl"), PSTRING("Confuse Ray")),
	LANGDEP(PSTRING("Panzerschutz"), PSTRING("Withdraw")),
	LANGDEP(PSTRING("Einigler"), PSTRING("Defense Curl")),
	LANGDEP(PSTRING("Barriere"), PSTRING("Barrier")),
	LANGDEP(PSTRING("Lichtschild"), PSTRING("Light Screen")),
	LANGDEP(PSTRING("Dunkelnebel"), PSTRING("Haze")),
	LANGDEP(PSTRING("Reflektor"), PSTRING("Reflect")),
	LANGDEP(PSTRING("Energiefokus"), PSTRING("Focus Energy")),
	LANGDEP(PSTRING("Geduld"), PSTRING("Bide")),
	LANGDEP(PSTRING("Metronom"), PSTRING("Metronome")),
	LANGDEP(PSTRING("Spiegeltrick"), PSTRING("Mirror Move")),
	LANGDEP(PSTRING("Finale"), PSTRING("Selfdestruct")),
	LANGDEP(PSTRING("Eierbombe"), PSTRING("Egg Bomb")),
	LANGDEP(PSTRING("Schlecker"), PSTRING("Lick")),
	LANGDEP(PSTRING("Smog"), PSTRING("Smog")),
	LANGDEP(PSTRING("Schlammbad"), PSTRING("Sludge")),
	LANGDEP(PSTRING("Knochenkeule"), PSTRING("Bone Club")),
	LANGDEP(PSTRING("Feuersturm"), PSTRING("Fire Blast")),
	LANGDEP(PSTRING("Kaskade"), PSTRING("Waterfall")),
	LANGDEP(PSTRING("Schnapper"), PSTRING("Clamp")),
	LANGDEP(PSTRING("Sternschauer"), PSTRING("Swift")),
	LANGDEP(PSTRING("Schädelwumme"), PSTRING("Skull Bash")),
	LANGDEP(PSTRING("Dornkanone"), PSTRING("Spike Cannon")),
	LANGDEP(PSTRING("Umklammerung"), PSTRING("Constrict")),
	LANGDEP(PSTRING("Amnesie"), PSTRING("Amnesia")),
	LANGDEP(PSTRING("Psykraft"), PSTRING("Kinesis")),
	LANGDEP(PSTRING("Weichei"), PSTRING("Softboiled")),
	LANGDEP(PSTRING("Turmkick"), PSTRING("Hi Jump Kick")),
	LANGDEP(PSTRING("Giftblick"), PSTRING("Glare")),
	LANGDEP(PSTRING("Traumfresser"), PSTRING("Dream Eater")),
	LANGDEP(PSTRING("Giftwolke"), PSTRING("Poison Gas")),
	LANGDEP(PSTRING("Stakkato"), PSTRING("Barrage")),
	LANGDEP(PSTRING("Blutsauger"), PSTRING("Leech Life")),
	LANGDEP(PSTRING("Todeskuss"), PSTRING("Lovely Kiss")),
	LANGDEP(PSTRING("Himmelsfeger"), PSTRING("Sky Attack")),
	LANGDEP(PSTRING("Wandler"), PSTRING("Transform")),
	LANGDEP(PSTRING("Blubber"), PSTRING("Bubble")),
	LANGDEP(PSTRING("Irrschlag"), PSTRING("Dizzy Punch")),
	LANGDEP(PSTRING("Pilzspore"), PSTRING("Spore")),
	LANGDEP(PSTRING("Blitz"), PSTRING("Flash")),
	LANGDEP(PSTRING("Psywelle"), PSTRING("Psywave")),
	LANGDEP(PSTRING("Platscher"), PSTRING("Splash")),
	LANGDEP(PSTRING("Säurepanzer"), PSTRING("Acid Armor")),
	LANGDEP(PSTRING("Krabbhammer"), PSTRING("Crabhammer")),
	LANGDEP(PSTRING("Explosion"), PSTRING("Explosion")),
	LANGDEP(PSTRING("Kratzfurie"), PSTRING("Fury Swipes")),
	LANGDEP(PSTRING("Knochmerang"), PSTRING("Bonemerang")),
	LANGDEP(PSTRING("Erholung"), PSTRING("Rest")),
	LANGDEP(PSTRING("Steinhagel"), PSTRING("Rock Slide")),
	LANGDEP(PSTRING("Hyperzahn"), PSTRING("Hyper Fang")),
	LANGDEP(PSTRING("Schärfer"), PSTRING("Sharpen")),
	LANGDEP(PSTRING("Umwandlung"), PSTRING("Conversion")),
	LANGDEP(PSTRING("Triplette"), PSTRING("Tri Attack")),
	LANGDEP(PSTRING("Superzahn"), PSTRING("Super Fang")),
	LANGDEP(PSTRING("Schlitzer"), PSTRING("Slash")),
	LANGDEP(PSTRING("Delegator"), PSTRING("Substitute")),
	LANGDEP(PSTRING("Verzweifler"), PSTRING("Struggle")),
	LANGDEP(PSTRING("Nachahmer"), PSTRING("Sketch")),
	LANGDEP(PSTRING("Dreifachkick"), PSTRING("Triple Kick")),
	LANGDEP(PSTRING("Raub"), PSTRING("Thief")),
	LANGDEP(PSTRING("Spinnennetz"), PSTRING("Spider Web")),
	LANGDEP(PSTRING("Willensleser"), PSTRING("Mind Reader")),
	LANGDEP(PSTRING("Nachtmahr"), PSTRING("Nightmare")),
	LANGDEP(PSTRING("Flammenrad"), PSTRING("Flame Wheel")),
	LANGDEP(PSTRING("Schnarcher"), PSTRING("Snore")),
	LANGDEP(PSTRING("Fluch"), PSTRING("Curse")),
	LANGDEP(PSTRING("Dreschflegel"), PSTRING("Flail")),
	LANGDEP(PSTRING("Unwandlung2"), PSTRING("Conversion 2")),
	LANGDEP(PSTRING("Luftstoß"), PSTRING("Aeroblast")),
	LANGDEP(PSTRING("Baumwollsaat"), PSTRING("Cotton Spore")),
	LANGDEP(PSTRING("Gegenschlag"), PSTRING("Reversal")),
	LANGDEP(PSTRING("Groll"), PSTRING("Spite")),
	LANGDEP(PSTRING("Pulverschnee"), PSTRING("Powder Snow")),
	LANGDEP(PSTRING("Schutzschild"), PSTRING("Protect")),
	LANGDEP(PSTRING("Tempohieb"), PSTRING("Mach Punch")),
	LANGDEP(PSTRING("Grimasse"), PSTRING("Scary Face")),
	LANGDEP(PSTRING("Finte"), PSTRING("Faint Attack")),
	LANGDEP(PSTRING("Bitterkuss"), PSTRING("Sweet Kiss")),
	LANGDEP(PSTRING("Bauchtrommel"), PSTRING("Belly Drum")),
	LANGDEP(PSTRING("Matschbombe"), PSTRING("Sludge Bomb")),
	LANGDEP(PSTRING("Lehmschelle"), PSTRING("Mud-slap")),
	LANGDEP(PSTRING("Octazooka"), PSTRING("Octazooka")),
	LANGDEP(PSTRING("Stachler"), PSTRING("Spikes")),
	LANGDEP(PSTRING("Blitzkanone"), PSTRING("Zap Cannon")),
	LANGDEP(PSTRING("Gesichte"), PSTRING("Foresight")),
	LANGDEP(PSTRING("Abgangsbund"), PSTRING("Destiny Bond")),
	LANGDEP(PSTRING("Abgesang"), PSTRING("Perish Song")),
	LANGDEP(PSTRING("Eissturm"), PSTRING("Icy Wind")),
	LANGDEP(PSTRING("Scanner"), PSTRING("Detect")),
	LANGDEP(PSTRING("Knochenhatz"), PSTRING("Bone Rush")),
	LANGDEP(PSTRING("Zielschuss"), PSTRING("Lock-on")),
	LANGDEP(PSTRING("Wutanfall"), PSTRING("Outrage")),
	LANGDEP(PSTRING("Sandsturm"), PSTRING("Sandstorm")),
	LANGDEP(PSTRING("Gigasauger"), PSTRING("Giga Drain")),
	LANGDEP(PSTRING("Ausdauer"), PSTRING("Endure")),
	LANGDEP(PSTRING("Charme"), PSTRING("Charm")),
	LANGDEP(PSTRING("Walzer"), PSTRING("Rollout")),
	LANGDEP(PSTRING("Trugschlag"), PSTRING("False Swipe")),
	LANGDEP(PSTRING("Angeberei"), PSTRING("Swagger")),
	LANGDEP(PSTRING("Milchgetränk"), PSTRING("Milk Drink")),
	LANGDEP(PSTRING("Funkensprung"), PSTRING("Spark")),
	LANGDEP(PSTRING("Zornklinge"), PSTRING("Fury Cutter")),
	LANGDEP(PSTRING("Stahlflügel"), PSTRING("Steel Wing")),
	LANGDEP(PSTRING("Horrorblick"), PSTRING("Mean Look")),
	LANGDEP(PSTRING("Anziehung"), PSTRING("Attract")),
	LANGDEP(PSTRING("Schlafrede"), PSTRING("Sleep Talk")),
	LANGDEP(PSTRING("Vitalglocke"), PSTRING("Heal Bell")),
	LANGDEP(PSTRING("Rückkehr"), PSTRING("Return")),
	LANGDEP(PSTRING("Geschenk"), PSTRING("Present")),
	LANGDEP(PSTRING("Frustration"), PSTRING("Frustration")),
	LANGDEP(PSTRING("Bodyguard"), PSTRING("Safeguard")),
	LANGDEP(PSTRING("Leidteiler"), PSTRING("Pain Split")),
	LANGDEP(PSTRING("Läuterfeuer"), PSTRING("Sacred Fire")),
	LANGDEP(PSTRING("Intensität"), PSTRING("Magnitude")),
	LANGDEP(PSTRING("Wuchtschlag"), PSTRING("Dynamicpunch")),
	LANGDEP(PSTRING("Vielender"), PSTRING("Megahorn")),
	LANGDEP(PSTRING("Feuerodem"), PSTRING("Dragonbreath")),
	LANGDEP(PSTRING("Staffette"), PSTRING("Baton Pass")),
	LANGDEP(PSTRING("Zugabe"), PSTRING("Encore")),
	LANGDEP(PSTRING("Verfolgung"), PSTRING("Pursuit")),
	LANGDEP(PSTRING("Turbodreher"), PSTRING("Rapid Spin")),
	LANGDEP(PSTRING("Lockduft"), PSTRING("Sweet Scent")),
	LANGDEP(PSTRING("Eisenschweif"), PSTRING("Iron Tail")),
	LANGDEP(PSTRING("Metallklaue"), PSTRING("Metal Claw")),
	LANGDEP(PSTRING("Überwurf"), PSTRING("Vital Throw")),
	LANGDEP(PSTRING("Morgengrauen"), PSTRING("Morning Sun")),
	LANGDEP(PSTRING("Synthese"), PSTRING("Synthesis")),
	LANGDEP(PSTRING("Mondschein"), PSTRING("Moonlight")),
	LANGDEP(PSTRING("Kraftreserve"), PSTRING("Hidden Power")),
	LANGDEP(PSTRING("Kreuzhieb"), PSTRING("Cross Chop")),
	LANGDEP(PSTRING("Windhose"), PSTRING("Twister")),
	LANGDEP(PSTRING("Regentanz"), PSTRING("Rain Dance")),
	LANGDEP(PSTRING("Sonnentag"), PSTRING("Sunny Day")),
	LANGDEP(PSTRING("Knirscher"), PSTRING("Crunch")),
	LANGDEP(PSTRING("Spiegelcape"), PSTRING("Mirror Coat")),
	LANGDEP(PSTRING("Psycho-Plus"), PSTRING("Psych Up")),
	LANGDEP(PSTRING("Turbotempo"), PSTRING("Extremespeed")),
	LANGDEP(PSTRING("Antik-Kraft"), PSTRING("Ancientpower")),
	LANGDEP(PSTRING("Spukball"), PSTRING("Shadow Ball")),
	LANGDEP(PSTRING("Seher"), PSTRING("Future Sight")),
	LANGDEP(PSTRING("Zertrümmerer"), PSTRING("Rock Smash")),
	LANGDEP(PSTRING("Whirlpool"), PSTRING("Whirlpool")),
	LANGDEP(PSTRING("Prügler"), PSTRING("Beat Up")),
	LANGDEP(PSTRING("Mogelhieb"), PSTRING("Fake Out")),
	LANGDEP(PSTRING("Aufruhr"), PSTRING("Uproar")),
	LANGDEP(PSTRING("Horter"), PSTRING("Stockpile")),
	LANGDEP(PSTRING("Entfessler"), PSTRING("Spit Up")),
	LANGDEP(PSTRING("Verzehrer"), PSTRING("Swallow")),
	LANGDEP(PSTRING("Hitzewelle"), PSTRING("Heat Wave")),
	LANGDEP(PSTRING("Hagelsturm"), PSTRING("Hail")),
	LANGDEP(PSTRING("Folterknecht"), PSTRING("Torment")),
	LANGDEP(PSTRING("Schmeichler"), PSTRING("Flatter")),
	LANGDEP(PSTRING("Irrlicht"), PSTRING("Will-o-wisp")),
	LANGDEP(PSTRING("Memento-Mori"), PSTRING("Memento")),
	LANGDEP(PSTRING("Fassade"), PSTRING("Facade")),
	LANGDEP(PSTRING("Power-Punch"), PSTRING("Focus Punch")),
	LANGDEP(PSTRING("Riechsalz"), PSTRING("Smellingsalt")),
	LANGDEP(PSTRING("Spotlight"), PSTRING("Follow Me")),
	LANGDEP(PSTRING("Natur-Kraft"), PSTRING("Nature Power")),
	LANGDEP(PSTRING("Ladevorgang"), PSTRING("Charge")),
	LANGDEP(PSTRING("Verhöhner"), PSTRING("Taunt")),
	LANGDEP(PSTRING("Rechte hand"), PSTRING("Helping Hand")),
	LANGDEP(PSTRING("Trickbetrug"), PSTRING("Trick")),
	LANGDEP(PSTRING("Rollentausch"), PSTRING("Role Play")),
	LANGDEP(PSTRING("Wunschtraum"), PSTRING("Wish")),
	LANGDEP(PSTRING("Zuschuss"), PSTRING("Assist")),
	LANGDEP(PSTRING("Verwurzler"), PSTRING("Ingrain")),
	LANGDEP(PSTRING("Kraftkoloss"), PSTRING("Superpower")),
	LANGDEP(PSTRING("Magiemantel"), PSTRING("Magic Coat")),
	LANGDEP(PSTRING("Aufbereitung"), PSTRING("Recycle")),
	LANGDEP(PSTRING("Vergeltung"), PSTRING("Revenge")),
	LANGDEP(PSTRING("Durchbruch"), PSTRING("Brick Break")),
	LANGDEP(PSTRING("Gähner"), PSTRING("Yawn")),
	LANGDEP(PSTRING("Abschlag"), PSTRING("Knock Off")),
	LANGDEP(PSTRING("Notsituation"), PSTRING("Endeavor")),
	LANGDEP(PSTRING("Eruption"), PSTRING("Eruption")),
	LANGDEP(PSTRING("Wertwechsel"), PSTRING("Skill Swap")),
	LANGDEP(PSTRING("Begrenzer"), PSTRING("Imprison")),
	LANGDEP(PSTRING("Heilung"), PSTRING("Refresh")),
	LANGDEP(PSTRING("Nachspiel"), PSTRING("Grudge")),
	LANGDEP(PSTRING("Übernahme"), PSTRING("Snatch")),
	LANGDEP(PSTRING("Geheimpower"), PSTRING("Secret Power")),
	LANGDEP(PSTRING("Taucher"), PSTRING("Dive")),
	LANGDEP(PSTRING("Armstoß"), PSTRING("Arm Thrust")),
	LANGDEP(PSTRING("Tarnung"), PSTRING("Camouflage")),
	LANGDEP(PSTRING("Schweifglanz"), PSTRING("Tail Glow")),
	LANGDEP(PSTRING("Scheinwerfer"), PSTRING("Luster Purge")),
	LANGDEP(PSTRING("Nebelball"), PSTRING("Mist Ball")),
	LANGDEP(PSTRING("Daunenreigen"), PSTRING("Featherdance")),
	LANGDEP(PSTRING("Taumeltanz"), PSTRING("Teeter Dance")),
	LANGDEP(PSTRING("Feuerfeger"), PSTRING("Blaze Kick")),
	LANGDEP(PSTRING("Lehmsuhler"), PSTRING("Mud Sport")),
	LANGDEP(PSTRING("Frostbeule"), PSTRING("Ice Ball")),
	LANGDEP(PSTRING("Nietenranke"), PSTRING("Needle Arm")),
	LANGDEP(PSTRING("Tagedieb"), PSTRING("Slack Off")),
	LANGDEP(PSTRING("Schallwelle"), PSTRING("Hyper Voice")),
	LANGDEP(PSTRING("Giftzahn"), PSTRING("Poison Fang")),
	LANGDEP(PSTRING("Zermalmklaue"), PSTRING("Crush Claw")),
	LANGDEP(PSTRING("Lohekanonade"), PSTRING("Blast Burn")),
	LANGDEP(PSTRING("Aquahaubitze"), PSTRING("Hydro Cannon")),
	LANGDEP(PSTRING("Sternhieb"), PSTRING("Meteor Mash")),
	LANGDEP(PSTRING("Erstauner"), PSTRING("Astonish")),
	LANGDEP(PSTRING("Meteorologe"), PSTRING("Weather Ball")),
	LANGDEP(PSTRING("Aromakur"), PSTRING("Aromatherapy")),
	LANGDEP(PSTRING("Trugträne"), PSTRING("Fake Tears")),
	LANGDEP(PSTRING("Windschnitt"), PSTRING("Air Cutter")),
	LANGDEP(PSTRING("Hitzekoller"), PSTRING("Overheat")),
	LANGDEP(PSTRING("Schnüffler"), PSTRING("Odor Sleuth")),
	LANGDEP(PSTRING("Felsgrab"), PSTRING("Rock Tomb")),
	LANGDEP(PSTRING("Silberhauch"), PSTRING("Silver Wind")),
	LANGDEP(PSTRING("Metallsound"), PSTRING("Metal Sound")),
	LANGDEP(PSTRING("Grasflöte"), PSTRING("Grasswhistle")),
	LANGDEP(PSTRING("Spaßkanone"), PSTRING("Tickle")),
	LANGDEP(PSTRING("Kosmik-Kraft"), PSTRING("Cosmic Power")),
	LANGDEP(PSTRING("Fontränen"), PSTRING("Water Spout")),
	LANGDEP(PSTRING("Ampelleuchte"), PSTRING("Signal Beam")),
	LANGDEP(PSTRING("Finsterfaust"), PSTRING("Shadow Punch")),
	LANGDEP(PSTRING("Sondersensor"), PSTRING("Extrasensory")),
	LANGDEP(PSTRING("Himmelhieb"), PSTRING("Sky Uppercut")),
	LANGDEP(PSTRING("Sandgrab"), PSTRING("Sand Tomb")),
	LANGDEP(PSTRING("Eiseskälte"), PSTRING("Sheer Cold")),
	LANGDEP(PSTRING("Lehmbrühe"), PSTRING("Muddy Water")),
	LANGDEP(PSTRING("Kugelsaat"), PSTRING("Bullet Seed")),
	LANGDEP(PSTRING("Aero-Ass"), PSTRING("Aerial Ace")),
	LANGDEP(PSTRING("Eisspeer"), PSTRING("Icicle Spear")),
	LANGDEP(PSTRING("Eisenabwehr"), PSTRING("Iron Defense")),
	LANGDEP(PSTRING("Rückentzug"), PSTRING("Block")),
	LANGDEP(PSTRING("Jauler"), PSTRING("Howl")),
	LANGDEP(PSTRING("Drachenklaue"), PSTRING("Dragon Claw")),
	LANGDEP(PSTRING("Flora-Statue"), PSTRING("Frenzy Plant")),
	LANGDEP(PSTRING("Protzer"), PSTRING("Bulk Up")),
	LANGDEP(PSTRING("Sprungfeder"), PSTRING("Bounce")),
	LANGDEP(PSTRING("Lehmschuss"), PSTRING("Mud Shot")),
	LANGDEP(PSTRING("Giftschweif"), PSTRING("Poison Tail")),
	LANGDEP(PSTRING("Bezirzer"), PSTRING("Covet")),
	LANGDEP(PSTRING("Volttackle"), PSTRING("Volt Tackle")),
	LANGDEP(PSTRING("Zauberblatt"), PSTRING("Magical Leaf")),
	LANGDEP(PSTRING("Nassmacher"), PSTRING("Water Sport")),
	LANGDEP(PSTRING("Gedankengut"), PSTRING("Calm Mind")),
	LANGDEP(PSTRING("Laubklinge"), PSTRING("Leaf Blade")),
	LANGDEP(PSTRING("Drachentanz"), PSTRING("Dragon Dance")),
	LANGDEP(PSTRING("Felswurf"), PSTRING("Rock Blast")),
	LANGDEP(PSTRING("Schockwelle"), PSTRING("Shock Wave")),
	LANGDEP(PSTRING("Aquawelle"), PSTRING("Water Pulse")),
	LANGDEP(PSTRING("Kismetwunsch"), PSTRING("Doom Desire")),
	LANGDEP(PSTRING("Psyschub"), PSTRING("Psycho Boost")),
	LANGDEP(PSTRING("-"), PSTRING("-")),
	LANGDEP(PSTRING("Hammerarm"), PSTRING("Hammer Arm")),
	LANGDEP(PSTRING("Aurasphäre"), PSTRING("Aura Sphere")),
	LANGDEP(PSTRING("Gifthieb"), PSTRING("Poison Jab")),
	LANGDEP(PSTRING("Fokusstoß"), PSTRING("Focus Blast")),
	LANGDEP(PSTRING("Patronenhieb"), PSTRING("Bullet Punch")),
	LANGDEP(PSTRING("Finsteraura"), PSTRING("Dark Pulse")),
	LANGDEP(PSTRING("Flammenblitz"), PSTRING("Flare Blitz")),
	LANGDEP(PSTRING("Eiszahn"), PSTRING("Ice Fang")),
	LANGDEP(PSTRING("Donnerzahn"), PSTRING("Thunder Fang")),
	LANGDEP(PSTRING("Dunkelklaue"), PSTRING("Shadow Claw")),
	LANGDEP(PSTRING("Kreuzschere"), PSTRING("X-Scissor")),
	LANGDEP(PSTRING("Steinkante"), PSTRING("Stone Edge")),
	LANGDEP(PSTRING("Sturzflug"), PSTRING("Brave Bird")),
	LANGDEP(PSTRING("Steinpolitur"), PSTRING("Rock Polish")),
	LANGDEP(PSTRING("Kraxler"), PSTRING("Rock Climb")),
	LANGDEP(PSTRING("Blättersturm"), PSTRING("Leaf Storm")),
	LANGDEP(PSTRING("Nahkampf"), PSTRING("Close Combat")),
	LANGDEP(PSTRING("Lichtkanone"), PSTRING("Flash Cannon")),
	LANGDEP(PSTRING("Draco-meteor"), PSTRING("Draco-meteor")),
	LANGDEP(PSTRING("Nassschweif"), PSTRING("Aqua Tail")),
	LANGDEP(PSTRING("Zen-kopfstoß"), PSTRING("Zen Headbutt")),
	LANGDEP(PSTRING("Energieball"), PSTRING("Energy Ball")),
	LANGDEP(PSTRING("Schattenstoß"), PSTRING("Shadow Sneak")),
	LANGDEP(PSTRING("Doppelschlag"), PSTRING("Thunder Punch")),
	LANGDEP(PSTRING("Tiefschlag"), PSTRING("Sucker Punch")),
	LANGDEP(PSTRING("Nachthieb"), PSTRING("Night Slash")),
	LANGDEP(PSTRING("Samenbombe"), PSTRING("Seed Bomb")),
	LANGDEP(PSTRING("Erdkräfte"), PSTRING("Earth Power")),
	LANGDEP(PSTRING("Drachenpuls"), PSTRING("Dragon Pulse")),
	LANGDEP(PSTRING("Eissplitter"), PSTRING("Ice Shard")),
	LANGDEP(PSTRING("Feuerzahn"), PSTRING("Fire Fang")),
	LANGDEP(PSTRING("Wasserdüse"), PSTRING("Aqua Jet")),
	LANGDEP(PSTRING("Zornfeuer"), PSTRING("Rage Flare")),
	LANGDEP(PSTRING("Tsunami"), PSTRING("Tsunami")),
	LANGDEP(PSTRING("Stahlstreich"), PSTRING("Steel Cut")),
	LANGDEP(PSTRING("Kinesiswelle"), PSTRING("Kinetic Wave")),
	LANGDEP(PSTRING("Supernova"), PSTRING("Supernova")),
	LANGDEP(PSTRING("Wasserspalt"), PSTRING("Ocean Fissure")),
	LANGDEP(PSTRING("Schallstich"), PSTRING("Sonic Stitch")),
	LANGDEP(PSTRING("Diebeskuss"), PSTRING("Draining Kiss")),
	LANGDEP(PSTRING("Knuddler"), PSTRING("Cuddle")),
	LANGDEP(PSTRING("Mondgewalt"), PSTRING("Moonblast")),
	LANGDEP(PSTRING("Zauberschein"), PSTRING("Dazzling Glea.")),
	LANGDEP(PSTRING("Säuselstimme"), PSTRING("Disarming Voi.")),
	LANGDEP(PSTRING("Bienenstich"), PSTRING("Bee Stitch")),
	LANGDEP(PSTRING("Schwarmstich"), PSTRING("Swarm Stitch")),
	LANGDEP(PSTRING("Gesang"), PSTRING("Gesang")),
	LANGDEP(PSTRING("Heißstein"), PSTRING("Hot Rocks")),
	LANGDEP(PSTRING("Gewitter"), PSTRING("Tempest")),
	LANGDEP(PSTRING("Eisenslam"), PSTRING("Iron Slam")),
	LANGDEP(PSTRING("Holzgeweih"), PSTRING("Horn Leech")),
	LANGDEP(PSTRING("Käferbiss"), PSTRING("Bug Bite")),
	LANGDEP(PSTRING("Falterreigen"), PSTRING("Falterreigen")),
	LANGDEP(PSTRING("Nitroladung"), PSTRING("Nitro Charge")),
	LANGDEP(PSTRING("Käfergebrumm"), PSTRING("Bug Buzz")),
	LANGDEP(PSTRING("Tornado"), PSTRING("Tornado")),
	LANGDEP(PSTRING("Königsschild"), PSTRING("King\'s Shield")),
};
