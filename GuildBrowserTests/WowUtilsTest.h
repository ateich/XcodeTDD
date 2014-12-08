//
//  GuildBrowserTests.h
//  GuildBrowserTests
//
//  Created by Charlie Fulton on 8/25/12.
//  Copyright (c) 2012 Charlie Fulton. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>
#import "WoWUtils.h"

@interface WowUtilsTest : SenTestCase

+(NSString *)classFromCharacterType:(CharacterClassType)type;
+(NSString *)raceFromRaceType:(CharacterRaceType)type;
+(NSString *)qualityFromQualityType:(ItemQuality)quality;

@end
