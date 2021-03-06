void print_tourney_details(Player winner, int year, int tourneynum) {

	if (tourneynum == 0) {
		cout << winner.name << " has won the " << year - 1 << " Military Tribute at the Greenbrier.\n";
	} else if (tourneynum == 1) {
		cout << winner.name << " has won the " << year - 1 << " Sanderson Farms Championship.\n";
	} else if (tourneynum == 2) {
		cout << winner.name << " has won the " << year - 1 << " Safeway Open.\n";
	} else if (tourneynum == 3) {
		cout << winner.name << " has won the " << year - 1 << " Shriners Hospitals for Children Open.\n";
	} else if (tourneynum == 4) {
		cout << winner.name << " has won the " << year - 1 << " Houston Open.\n";
	} else if (tourneynum == 5) {
		cout << winner.name << " has won the " << year - 1 << " CJ Cup.\n";
	} else if (tourneynum == 6) {
		cout << winner.name << " has won the " << year - 1 << " Zozo Championship.\n";
	} else if (tourneynum == 7) {
		cout << winner.name << " has won the " << year - 1 << " WGC-HSBC Champions.\n";
	} else if (tourneynum == 8) {
		cout << winner.name << " has won the " << year - 1 << " Mayakoba Golf Classic.\n";
	} else if (tourneynum == 9) {
		cout << winner.name << " has won the " << year - 1 << " RSM Classic.\n";
	} else if (tourneynum == 10) {
		cout << winner.name << " has won the " << year << " Sentry Tournament of Champions.\n";
	} else if (tourneynum == 11) {
		cout << winner.name << " has won the " << year << " Sony Open in Hawaii.\n";
	} else if (tourneynum == 12) {
		cout << winner.name << " has won the " << year << " American Express.\n";
	} else if (tourneynum == 13) {
		cout << winner.name << " has won the " << year << " Farmers Insurance Open.\n";
	} else if (tourneynum == 14) {
		cout << winner.name << " has won the " << year << " Waste Management Phoenix Open.\n";
	} else if (tourneynum == 15) {
		cout << winner.name << " has won the " << year << " AT&T Pebble Beach Pro-Am.\n";
	} else if (tourneynum == 16) {
		cout << winner.name << " has won the " << year << " Genesis Invitational.\n";
	} else if (tourneynum == 17) {
		cout << winner.name << " has won the " << year << " WGC-Mexico Championship.\n";
	} else if (tourneynum == 18) {
		cout << winner.name << " has won the " << year << " Honda Classic.\n";
	} else if (tourneynum == 19) {
		cout << winner.name << " has won the " << year << " Arnold Palmer Invitational.\n";
	} else if (tourneynum == 20) {
		cout << winner.name << " has won the " << year << " Players Championship!\n";
	} else if (tourneynum == 21) {
		cout << winner.name << " has won the " << year << " Valspar Championship.\n";
	} else if (tourneynum == 22) {
		cout << winner.name << " has won the " << year << " WGC-Dell Technologies Match Play.\n";
	} else if (tourneynum == 23) {
		cout << winner.name << " has won the " << year << " Valero Texas Open.\n";
	} else if (tourneynum == 24) {
		cout << winner.name << " claims the green jacket at the " << year << " Masters!\n";
	} else if (tourneynum == 25) {
		cout << winner.name << " has won the " << year << " RBC Heritage.\n";
	} else if (tourneynum == 26) {
		cout << winner.name << " has won the " << year << " Wells Fargo Championship.\n";
	} else if (tourneynum == 27) {
		cout << winner.name << " has won the " << year << " AT&T Byron Nelson.\n";
	} else if (tourneynum == 28) {
		cout << winner.name << " is victorious at the " << year << " PGA Championship!\n";
	} else if (tourneynum == 29) {
		cout << winner.name << " has won the " << year << " Charles Schwab Challenge.\n";
	} else if (tourneynum == 30) {
		cout << winner.name << " has won the " << year << " Rocket Mortage Classic.\n";
	} else if (tourneynum == 31) {
		cout << winner.name << " has won the " << year << " Memorial Tournament.\n";
	} else if (tourneynum == 32) {
		cout << winner.name << " has won the " << year << " RBC Canadian Open.\n";
	} else if (tourneynum == 33) {
		cout << winner.name << " triumphs over golf's ultimate test at the " << year << " U.S. Open!\n";
	} else if (tourneynum == 34) {
		cout << winner.name << " has won the " << year << " Travelers Championship.\n";
	} else if (tourneynum == 35) {
		cout << winner.name << " has won the " << year << " WGC-FedEx St. Jude Invitational.\n";
	} else if (tourneynum == 36) {
		cout << winner.name << " has won the " << year << " John Deere Classic.\n";
	} else if (tourneynum == 37) {
		cout << winner.name << " is the Champion Golfer of the Year at the " << year << " Open Championship!\n";
	} else if (tourneynum == 38) {
		cout << winner.name << " has won the " << year << " 3M Open.\n";	
	} else if (tourneynum == 39) {
		cout << winner.name << " has won the " << year << " Wyndham Championship.\n";
	} else if (tourneynum == 40) {
		cout << winner.name << " has won the " << year << " Northern Trust!\n";
	} else if (tourneynum == 41) {
		cout << winner.name << " has won the " << year << " BMW Championship!\n";
	} else if (tourneynum == 42) {
		cout << winner.name << " has won the " << year << " Tour Championship!\n";
	}
}


//OBSOLETE: REPLACED BY DETERMINE_SCORES (SEE BELOW)
//Determines the winner of a stroke play tournament from an array of golfers and modifies the relevant attributes of that golfer
void determine_winner(Player golfers[], int golfernum, int tourneynum, double regulartourneyscores[], double wgcfedexscores[], double majorfedexscores[], double playoffscores[], bool tourneyprintflag, int year) {
	
	double fedexratingsum;
	bool placedflag = false;
	Player tourneypodium[3];
	
	for (int i = 0; i < golfernum; i++) {

		fedexratingsum = career_sum(golfers, golfernum);
		fedexratingsum += 0.5;
		int intsum = (int) fedexratingsum;
		int randomnum = (rand() % intsum) + 1;

		placedflag = false;

		for (int j = 0; j < golfernum; j++) {

			if ((placedflag == false) && (golfers[j].placedflag == false)) {

				randomnum -= golfers[j].rating;
				if (randomnum <= 0) {
					golfers[j].placedflag = true;
					placedflag = true;
					if (i == 0) {
						tourneypodium[0] = golfers[j];
						golfers[j].pgatourwins++;
						if ((tourneynum == 20) || (tourneynum == 24) || (tourneynum == 28) || (tourneynum == 33) || (tourneynum == 37)) {
							if (tourneynum != 20) {
								golfers[j].majorswon++;
								if (tourneynum == 24) {
									golfers[j].masterswon++;
								} else if (tourneynum == 28) {
									golfers[j].pgaswon++;
								} else if (tourneynum == 33) {
									golfers[j].usopenswon++;
								} else if (tourneynum == 37) {
									golfers[j].openswon++;
								}
							}
						}
					} else if (i == 1) {
						tourneypodium[1] = golfers[j];
					} else if (i == 2) {
						tourneypodium[2] = golfers[j];
					}

					if ((tourneynum == 20) || (tourneynum == 24) || (tourneynum == 28) || (tourneynum == 33) || (tourneynum == 37)) {
						golfers[j].fedexpoints += majorfedexscores[i];
					} else if ((tourneynum == 7) || (tourneynum == 17) || (tourneynum == 22) || (tourneynum == 35)) {
						golfers[j].fedexpoints += wgcfedexscores[j];
					} else if ((tourneynum > 38) && (tourneynum < 42)) {
						golfers[j].fedexpoints += playoffscores[i];
					} else {
						golfers[j].fedexpoints += regulartourneyscores[i];
					}
				}
			} 
		}

		shuffle(golfers, golfernum);
	}

	if (tourneyprintflag == true) {
		print_tourney_details(tourneypodium[0], year + 2020, tourneynum);
		cout << tourneypodium[1].name << " comes in second place, and " << tourneypodium[2].name << " comes in third.\n\n";
	}
	
}


//Simplistic method of determining the winner of a match between two golfers. Returns true if golfer1 wins, false if golfer2 wins
bool determine_match_winner(Player golfer1, Player golfer2) {
	
	int matchratingsum = (int) (golfer1.matchrating + golfer2.matchrating + 0.5);
	return (rand() % matchratingsum) < golfer1.matchrating;
}


//Determines the winner of one hole in a match between two golfers. Returns 1 if golfer1 wins, 2 if they tie, and 3 if golfer2 wins
int determine_hole_winner(Player golfer1, Player golfer2) {

	int ratingtotal = (int) ((golfer1.matchrating * 2) + (golfer2.matchrating * 2) + 0.5);
	int oneononerandnum = (rand() % ratingtotal);
	if (oneononerandnum < golfer1.matchrating) {
		return 1;
	} else if (oneononerandnum < (ratingtotal - golfer2.matchrating)) {
		return 2;
	} else {
		return 3;
	}
}


//Determines the winner of a foursome match. Returns 1 if golfers 1 and 2 win, 2 if the four of them tie, and 3 if golfers 3 and 4 win
int determine_foursome_winner(Player golfer1, Player golfer2, Player golfer3, Player golfer4) {
	
	int foursomerating = (golfer1.rating + golfer2.rating + golfer3.rating + golfer4.rating) / 4;
	golfer1.matchrating = (golfer1.rating + foursomerating) / 2;
	golfer2.matchrating = (golfer2.rating + foursomerating) / 2;
	golfer3.matchrating = (golfer3.rating + foursomerating) / 2;
	golfer4.matchrating = (golfer4.rating + foursomerating) / 2;

	int foursomematchratingsum = (int) (golfer1.matchrating + golfer2.matchrating + golfer3.matchrating + golfer4.matchrating + 0.5);
	int foursomerandnum = (rand() % foursomematchratingsum);

	if (foursomerandnum < (golfer1.matchrating + golfer2.matchrating)) {
		return 1;
	} else if (foursomerandnum < (foursomematchratingsum - (golfer3.matchrating + golfer4.matchrating))) {
		return 2;
	} else {
		return 3;
	}
}


//Prints details about a hole that depend on whether the hole had a victor or whether it was tied.
void print_hole_details(Player winninggolfer, Player losinggolfer, bool tieflag) {

	string details[30];
	details[0] = winninggolfer.name + " works his magic around the greens as he holes his bunker shot to win the hole.";
	details[1] = winninggolfer.name + "'s enourmous drive sets up a wedge shot that " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " sticks to 5 feet, and he makes the ticklish birdie putt to win the hole.";
	details[2] = "In a mano a mano battle, " + winninggolfer.name + " and " + losinggolfer.name + " play the hole almost exactly the same and end up with the same putts, but " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " misses his left and " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " gets the read to sink the putt and win the hole.";
	details[3] = "A superbly executed hole for " + winninggolfer.name + ", as he stripes his tee shot, flushes an 8-iron to within 10 feet, and casually makes the birdie putt to win the hole.";
	details[4] = "Incredible luck for " + winninggolfer.name + "! An approach shot headed for the bunker takes a wild carom off the lip that rolls three feet from the cup, and that'll give " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " the hole.";
	details[5] = "Like baseball, the other half of golf may be physical, but 90\% of it is mental. That's why " + winninggolfer.name + "'s courage and mental fortitude paid off, as his aggressive angle to the hole off the tee left him a much shorter approach shot and led to him winning the hole.";
	details[6] = "A boisterous fan engages " + winninggolfer.name + " in some good-natured verbal jousting as he walks to the tee box, which seems to inspire " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " as he crushes his farthest drive of the day. The joyous cheering of " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + "'s fans propels him to an emphatic victory of the hole over " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + ".";
	details[7] = "There was no stopping " + winninggolfer.name + " on this hole. An ill-timed and thoughtless shout during " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + "'s downswing made his caddie and course marshals furious, but " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " seemed unperturbed as he walked after his gorgeous tee shot and went on to handily take the hole from " + losinggolfer.name + ".";
	details[8] = "When you're on, you're on. " + winninggolfer.name + " wowed the crowd by almost holing his approach to the green, giving him a tap-in that he sunk to win the hole over " + losinggolfer.name + ".";
	details[9] = "I wonder if he meant to do that. " + winninggolfer.name + "'s second shot seemed to barely leave the ground as it rocketed towards the hole, but this skillful avoidance of suddenly gusting winds allowed him to reach the green when " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " could not. This made all the difference for " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + ", as he went on to win the hole.";
	
	details[10] = losinggolfer.name + "'s 15-foot putt just misses on the low side, giving " + winninggolfer.name + " the hole.";
	details[11] = losinggolfer.name + " loses it way right off the tee, and a skillful recovery shot after his drop won't be enough for " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " as he loses the hole to " + winninggolfer.name + ".";
	details[12] = "Trouble for " + losinggolfer.name + " around the greens as his chunked chip falls woefully short and his two-putt bogey hands " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " the hole.";
	details[13] = losinggolfer.name + "'s approach shot succumbs to the green's false front, and although he pitches it to seven feet, " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " misses the par putt and loses the hole.";
	details[14] = losinggolfer.name + " must have ate one too many bowls of Wheaties this morning: his seemingly miscalculated approach shot sails over the green, a costly error that hands " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " the hole.";
	details[15] = "This hole was no match for either golfer. It looked as if two birdies were on the way, only for " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + "'s ball to lip out from only six feet. A painful loss, and a very lucky break for " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + ".";
	details[16] = losinggolfer.name + "'s tee shot settles in some pine straw off the left side of the fairway, and judging by the poor quality of his second shot and his wincing afterwards, it seems he struck a root when he hit the ball. Unfortunately, these misadventures will cost " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " the hole.";
	details[17] = "It just wasn't " + losinggolfer.name + "'s hole. His tee shot landed in a fairway bunker, and his most valiant efforts to salvage the hole after that misstep did " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " no good. His long par putt slid just past the hole, making " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + "the hole's victor.";
	details[18] = "A tough hole to watch for fans of " + losinggolfer.name + ". The golfing legend seemed to shake his head after every shot, and those nearby the green after he missed his short bogey putt to lose the hole heard him mutter in disgust of his play. Hopefully " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " gets his mind right for the next hole.";
	details[19] = "A phenomenally bad break for " + losinggolfer.name + ". His ball seemed to have settled four or five paces from the hole, only for it to inexplicably catch the slope of the green as " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " approached the green and roll onto the fairway. Being the tenacious golfer he is, " + winninggolfer.name + " took advantage of this and sunk a clutch birdie putt to win the hole.";
	
	details[20] = "These two golfers have played incredible golf against each other in the past, but 'incredible' isn't a word that comes to mind when describing this hole. " + winninggolfer.name + " and " + losinggolfer.name + " both make sloppy bogeys, leaving them tied for the hole.";
	details[21] = "Golf is a funny game. " + winninggolfer.name + " seemed to have the hole in the bag, but after " + losinggolfer.name + " sunk an amazing 35-foot par putt, " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " pushed his five-foot birdie putt and never gave it a chance. The two golfers end up splitting the hole.";
	details[22] = "A ho-hum hole for both players, as neither " + winninggolfer.name + " nor " + losinggolfer.name + " is able to get their approach shots close to the green. Two two-putts lead to " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " and " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " tying the hole.";
	details[23] = winninggolfer.name + " may have outdriven " + losinggolfer.name + " by a considerable margin, but there's a reason you drive for show and putt for dough. " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " sinks a 25-foot birdie putt right before " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " cleans up his putt for birdie to tie the hole.";
	details[24] = "Trouble for both players off the tee: " + winninggolfer.name + " lands in thick rough that he's barely able to whack it out of, and " + losinggolfer.name + " ends up hitting an unfortunate fan in the gallery. After a barrage of apologies and an autographed glove, both players bogey the hole.";
	details[25] = "A solid drive from both players, although " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + "'s seemed to carry just a little farther. Regardless, both players are able to put it on the green and two-putt for a routine par.";
	details[26] = losinggolfer.name + " seemed as surprised as everyone else at the atypical ball flight on his approach shot. His shot may have barely left the ground, but it rolled right up to the green and gave " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " a birdie putt that he'd make to tie the hole with " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + ".";
	details[27] = "Both players are able to get it done from different less-than-ideal spots around the green. " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " perfectly places his chip from the basin his ball rolled into, and " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " makes a superb sand shot that he taps in for par, as " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " does also to tie the hole.";
	details[28] = "These two are not letting the pressure of the moment get to them. " + winninggolfer.name + " and " + losinggolfer.name + " both crush their tee shots and flush 3-irons that roll onto the edge of the green on this par-5. Neither golfer can shake the other on this hole, however, as " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + " and " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " both two-putt to tie the hole.";
	details[29] = "What looked like a horrific tee shot from " + losinggolfer.name + " took a wild kick off a tree branch into the middle of the fairway. " + losinggolfer.name.substr(losinggolfer.name.find(" ") + 1) + " could only shake his head and smile, and perhaps bolstered by his luck, he manages to birdie the hole to tie the hole with " + winninggolfer.name.substr(winninggolfer.name.find(" ") + 1) + ".";

	int randdetail;
	if (tieflag == false) {
		randdetail = rand() % 20;
	} else {
		randdetail = (rand() % 10) + 20;
	}

	cout << details[randdetail] << "\n\n";

}

//Runs a number of match play matches specified by nummatches. 
//Calls determine_hole_winner appropriate number of times in order to determine match results.
//Returns pointer to an array containing the golfers in the match with the appropriate attributes updated.
Player* run_match(Player golfer1, Player golfer2, int nummatches, bool detailsflag) {

	double ratingavg = (golfer1.rating + golfer2.rating) / 2;
	golfer1.matchrating = (golfer1.rating + ratingavg) / 2;
	golfer2.matchrating = (golfer2.rating + ratingavg) / 2;

	for (int i = 0; i < nummatches; i++) {
		bool victoryflag = false;
		int roundsum = 0;
		int numholesleft = 18;
		int holeresult = 0;
		for (int j = 1; j < 19; j++) {
			holeresult = determine_hole_winner(golfer1, golfer2);
			numholesleft--;

			if (victoryflag == false) {
				if (holeresult == 1) {
					roundsum--;
					if (detailsflag == true) {
						print_hole_details(golfer1, golfer2, false);
					}
				} else if (holeresult == 2) {
					if (detailsflag == true) {
						print_hole_details(golfer1, golfer2, true);
					}
				} else {
					roundsum++;
					if (detailsflag == true) {
						print_hole_details(golfer2, golfer1, false);
					}
				}

				if (detailsflag == true) {
					if (roundsum < 0) {
						cout << "After " << j << " holes, " << golfer1.name << " is up by " << abs(roundsum) << ".\n\n";
					} else if (roundsum > 0) {
						cout << "After " << j << " holes, " << golfer2.name << " is up by " << abs(roundsum) << ".\n\n";
					} else {
						cout << "After " << j << " holes, " << golfer1.name << " and " << golfer2.name << " are all tied up.\n\n";
					}
				}
			}

			if ((abs(roundsum) > numholesleft) && (victoryflag == false)) {
				victoryflag = true;
				if (roundsum < 0) {
					golfer1.nummatcheswon++;
					if (nummatches == 1) {
						cout << golfer1.name << " defeats " << golfer2.name << " " << abs(roundsum) << " & " << numholesleft << "!\n";
					}
				} else if (roundsum > 0){
					golfer2.nummatcheswon++;
					if (nummatches == 1) {
						cout << golfer2.name << " defeats " << golfer1.name << " " << abs(roundsum) << " & " << numholesleft << "!\n";
					}	
				}
			}
		}

		if ((roundsum == 0) && (nummatches == 1)) {
			golfer1.nummatchestied++;
			golfer2.nummatchestied++;
			cout << golfer1.name << " and " << golfer2.name << " tie the match.\n";
		}
	}

	Player* matchreturngolfers = new Player[2];
	matchreturngolfers[0] = golfer1;
	matchreturngolfers[1] = golfer2;
	return matchreturngolfers;
}


//Function to generate 18-hole scores for each golfer
void determine_scores(Player golfers[], int golfernum, int tourneynum, int tourneypar, double tourneyscores[], bool tourneyprintflag, int year) {

	default_random_engine generator;
	normal_distribution<double> distribution(tourneypar - 1, 2.0);

	int scores[golfernum];
	Player tourneypodium[3];

	for (int i = 0; i < golfernum; i++) {
		double scoredub = distribution(generator);
		scoredub += 0.5;
		int score = (int)scoredub;
		scores[i] = score;
	}

	sort(scores, scores + golfernum);

	bool placedflag = false;
	srand(time(NULL));

	//Checks if we're simulating 2020 Players, which would mean we only need to sim 3 rounds instead of 4
	int numrounds;
	if (tourneyscores == 0) {
		numrounds = 3;
	} else {
		numrounds = 4;
	}

	for (int h = 0; h < numrounds; h++) {

		for (int i = 0; i < golfernum; i++) {

			double career_sum_scores = career_sum(golfers, golfernum);
			career_sum_scores += 0.5;
			int int_sum_scores = (int) career_sum_scores;
			int randomnum = (rand() % int_sum_scores) + 1;

			placedflag = false;
			for (int j = 0; j < golfernum; j++) {

				if ((placedflag == false) && (golfers[j].placedflag == false)) {

					randomnum -= golfers[j].rating;
					if (randomnum <= 0) {
						golfers[j].placedflag = true;
						placedflag = true;
						golfers[j].score += scores[i];

						//This checks if we're only simulating the 2020 Players, which FedEx points wouldn't matter for
						if (tourneyscores != 0) {
							golfers[j].fedexpoints += tourneyscores[i];
						}
					}
				}
			}

			shuffle(golfers, golfernum);
		}

		score_sort(golfers, golfernum);

		//Only meant to print the leaderboards of Days 2-4 for simulating 2020 Players
		if (tourneyprintflag == true) {
			if (tourneyscores == 0) {
				cout << "\nDay " << h+2 << " Leaderboard:\n";
				for (int n = 0; n < 10; n++) {
					if (golfers[n].score < (tourneypar*(h+2))) {
						cout << golfers[n].name << ": " << golfers[n].score - (tourneypar * (h+1)) << '\n';
					} else if (golfers[n].score == (tourneypar*(h+2))) {
						cout << golfers[n].name << ": E\n";
					} else {
						cout << golfers[n].name << ": +" << golfers[n].score - (tourneypar * (h+1)) << '\n';
					}
				}
				cout << "\n";
			}
		}
		
		//This loop is for resetting the placed flag, must be applied to every golfer
		for (int i = 0; i < golfernum; i++) {
			golfers[i].placedflag = false;
		}

		//This loop is only for printing the scores of the top 10 golfers in a tournament if we're not simulating the 2020 Players
		if ((tourneyprintflag == true) && (tourneyscores != 0)) {
			for (int i = 0; i < 10; i++) {
				if (h == 3) {
					if (golfers[i].score < (tourneypar*(h+1))) {
						cout << golfers[i].name << ": " << golfers[i].score - (tourneypar * (h+1)) << '\n';
					} else if (golfers[i].score == (tourneypar*(h+1))) {
						cout << golfers[i].name << ": E\n";
					} else {
						cout << golfers[i].name << ": +" << golfers[i].score - (tourneypar * (h+1)) << '\n';
					}
				}
			}
		}

		shuffle(golfers, golfernum);
	}

	score_sort(golfers, golfernum);
	tourneypodium[0] = golfers[0];
	golfers[0].pgatourwins++;
	if ((tourneynum == 24) || (tourneynum == 28) || (tourneynum == 33) || (tourneynum == 37)) {
		golfers[0].majorswon++;
		if (tourneynum == 24) {
			golfers[0].masterswon++;
		} else if (tourneynum == 28) {
			golfers[0].pgaswon++;
		} else if (tourneynum == 33) {
			golfers[0].usopenswon++;
		} else if (tourneynum == 37) {
			golfers[0].openswon++;
		}
	}
	tourneypodium[1] = golfers[1];
	tourneypodium[2] = golfers[2];

	if (tourneyprintflag == true) {
		print_tourney_details(tourneypodium[0], year + 2020, tourneynum);
		cout << tourneypodium[1].name << " comes in second place, and " << tourneypodium[2].name << " comes in third.\n\n";
		cout << "-------------------------------\n";
	}

}