Localizable String for C++

Framework parse xml with struct:
<LocalizableString>
  <KEY>
    <LANG1 string="string for key on lang1" />
    <LANG2 string="string for key on lang2" />
  </KEY>
</LocalizableString>

For example:
<LocalizableString>
    <START>
        <RU string="СТАРТ!" />
        <FR string="DÉBUT!" />
        <EN string="START!" />
        <IT string="INIZIO!" />
	<SP string="COMIENZO!" />
        <PT string="COMEÇAR!" />		
        <UA string="СТАРТ!" />
        <CH string="開始！" />		
        <JP string="開始！" />		
    </START>
    <GET>
        <RU string="ПОЛУЧИТЬ" />
        <FR string="GET" />
        <EN string="GET" />
        <IT string="OTTENERE" />
	<SP string="OBTENER" />
        <PT string="OBTER" />		
        <UA string="" />
        <CH string="得到" />		
        <JP string="" />
        <DE string="" />
        <KR string="" />
        <SE string="" />
    </GET>
    <OPEN>
        <RU string="ОТКРЫТЬ" />
        <FR string="OUVERT" />
        <EN string="OPEN" />
        <IT string="" />
	<SP string="" />
        <PT string="" />		
        <UA string="" />
        <CH string="" />		
        <JP string="" />		
    </OPEN>
</LocalizableString>

How to use?

LocalizableString::get("Start");

Function return std::string with string on current application language. If string on current application language not found in LocalizablString.xml, function return std::string on default language (EN).

	