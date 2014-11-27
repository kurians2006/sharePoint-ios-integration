/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 *
 * Warning: This code was generated automatically. Edits will be overwritten.
 * To make changes to this code, please make changes to the generation framework itself:
 * https://github.com/MSOpenTech/odata-codegen
 *******************************************************************************/

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookCalendarGroupOperations.h"
#import "MSOutlookCalendarGroup.h"
@class MSOutlookCalendarCollectionFetcher;


/**
* The header for type MSOutlookCalendarGroupFetcher.
*/

@protocol MSOutlookCalendarGroupFetcher

@optional
-(NSURLSessionDataTask *)read:(void (^)(MSOutlookCalendarGroup* calendarGroup, NSError *error))callback;
-(NSURLSessionDataTask*) updateCalendarGroup:(id)entity withCallback:(void (^)(MSOutlookCalendarGroup*, NSError * error))callback;
-(NSURLSessionDataTask*) deleteCalendarGroup:(void (^)(int status, NSError * error))callback;

@end

@interface MSOutlookCalendarGroupFetcher : MSODataEntityFetcher<MSOutlookCalendarGroupFetcher>

-(MSOutlookCalendarGroupOperations*) getOperations;

-(MSOutlookCalendarCollectionFetcher*) getCalendars;

	
@end