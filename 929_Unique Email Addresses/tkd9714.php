class Solution {

    /**
     * @param String[] $emails
     * @return Integer
     */
    function numUniqueEmails($emails) {
        $emails = preg_replace('/\.(?=(.*@))|\+[\w\.]*/i', '', $emails);
	    return count(array_unique($emails));
    }
}
