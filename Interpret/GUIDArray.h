#pragma once
#include <Interpret/Guids.h>

namespace guid
{
#define GUID_ENTRY(guid) {&(guid), L#guid},
	static GUID_ARRAY_ENTRY g_PropGuidArray[] = {
		GUID_ENTRY(IID_IUnknown) //
		GUID_ENTRY(IID_IMAPITable) //
		GUID_ENTRY(IID_IMAPIAdviseSink) //
		GUID_ENTRY(IID_IMAPIProp) //
		GUID_ENTRY(IID_IMsgStore) //
		GUID_ENTRY(IID_IMessage) //
		GUID_ENTRY(IID_IMailUser) //
		GUID_ENTRY(IID_IMAPIContainer) //
		GUID_ENTRY(IID_IMAPIFolder) //
		GUID_ENTRY(IID_IABContainer) //
		GUID_ENTRY(IID_IDistList) //
		GUID_ENTRY(IID_IMAPIProgress) //
		GUID_ENTRY(IID_IMAPIViewContext) //
		GUID_ENTRY(IID_IMAPIForm) //
		GUID_ENTRY(PS_MAPI) //
		GUID_ENTRY(PS_PUBLIC_STRINGS) //
		GUID_ENTRY(IID_IPersistMessage) //
		GUID_ENTRY(IID_IMAPIViewAdviseSink) //
		GUID_ENTRY(IID_IStreamDocfile) //
		GUID_ENTRY(IID_IMAPIMessageSite) //
		GUID_ENTRY(PS_ROUTING_EMAIL_ADDRESSES) //
		GUID_ENTRY(PS_ROUTING_ADDRTYPE) //
		GUID_ENTRY(PS_ROUTING_DISPLAY_NAME) //
		GUID_ENTRY(PS_ROUTING_ENTRYID) //
		GUID_ENTRY(PS_ROUTING_SEARCH_KEY) //
		GUID_ENTRY(MUID_PROFILE_INSTANCE) //
		GUID_ENTRY(PS_INTERNET_HEADERS) //
		GUID_ENTRY(IID_IMsgServiceAdmin2) //
		GUID_ENTRY(IID_IMessageRaw) //
		GUID_ENTRY(IID_IMAPIClientShutdown) //
		GUID_ENTRY(IID_IMAPIProviderShutdown) //
		GUID_ENTRY(IID_CAPONE_PROF) //
		GUID_ENTRY(PSETID_Appointment) //
		GUID_ENTRY(PSETID_Task) //
		GUID_ENTRY(PSETID_Address) //
		GUID_ENTRY(PSETID_Common) //
		GUID_ENTRY(PSETID_Log) //
		GUID_ENTRY(PSETID_Note) //
		GUID_ENTRY(PSETID_Report) //
		GUID_ENTRY(PSETID_Remote) //
		GUID_ENTRY(PSETID_Sharing) //
		GUID_ENTRY(PSETID_PostRss) //

		GUID_ENTRY(CLSID_MailFolder) //
		GUID_ENTRY(CLSID_ContactFolder) //
		GUID_ENTRY(CLSID_CalendarFolder) //
		GUID_ENTRY(CLSID_TaskFolder) //
		GUID_ENTRY(CLSID_NoteFolder) //
		GUID_ENTRY(CLSID_JournalFolder) //

		GUID_ENTRY(muidContabDLL) //
		GUID_ENTRY(g_muidStorePublic) //
		GUID_ENTRY(muidStoreWrap) //
		GUID_ENTRY(PSETID_CalendarAssistant) //
		GUID_ENTRY(g_muidStorePrivate) //
		GUID_ENTRY(PSETID_XmlExtractedEntities) //
		GUID_ENTRY(IID_IMAPISecureMessage) //
		GUID_ENTRY(IID_IProxyStoreObject) //
		GUID_ENTRY(PSETID_UnifiedMessaging) //
		GUID_ENTRY(IID_IMAPISync) //
		GUID_ENTRY(IID_IMAPISyncProgressCallback) //
		GUID_ENTRY(GUID_Dilkie) //
		GUID_ENTRY(IID_IMAPIGetSession) //
		GUID_ENTRY(PSETID_Meeting) //
		GUID_ENTRY(PSETID_AirSync) //
		GUID_ENTRY(pbLongTermNonPrivateGuid) //
		GUID_ENTRY(PSETID_Attachment) //
		GUID_ENTRY(muidOOP) //
		GUID_ENTRY(IID_IAttachmentSecurity) //
		GUID_ENTRY(muidEMSAB) //
		{LPGUID(pbGlobalProfileSectionGuid), L"pbGlobalProfileSectionGuid"}, // STRING_OK
		GUID_ENTRY(WAB_GUID) //
	};
}