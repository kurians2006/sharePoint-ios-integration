/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSOutlookServicesCalendarGroupFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookServicesModels.h"

/**
* The header for type MSOutlookServicesCalendarGroupCollectionFetcher.
*/

@protocol MSOutlookServicesCalendarGroupCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSOutlookServicesCalendarGroup> *calendarGroups, MSODataException *exception))callback;

- (id<MSOutlookServicesCalendarGroupCollectionFetcher>)select:(NSString *)params;
- (id<MSOutlookServicesCalendarGroupCollectionFetcher>)filter:(NSString *)params;
- (id<MSOutlookServicesCalendarGroupCollectionFetcher>)top:(int)value;
- (id<MSOutlookServicesCalendarGroupCollectionFetcher>)skip:(int)value;
- (id<MSOutlookServicesCalendarGroupCollectionFetcher>)expand:(NSString *)value;
- (id<MSOutlookServicesCalendarGroupCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSOutlookServicesCalendarGroupCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookServicesCalendarGroupCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSOutlookServicesCalendarGroupFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addCalendarGroup:(MSOutlookServicesCalendarGroup *)entity callback:(void (^)(MSOutlookServicesCalendarGroup *calendarGroup, MSODataException *e))callback;

@end

@interface MSOutlookServicesCalendarGroupCollectionFetcher : MSODataCollectionFetcher<MSOutlookServicesCalendarGroupCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end